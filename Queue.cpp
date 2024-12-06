#include <iostream>
#include <stack>
#include <string>
#include <iomanip>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Person {
public:
    string name;
    string ticketNumber;

    Person(string name, string ticketNumber) : name(name), ticketNumber(ticketNumber) {}
};

class Queue {
private:
    stack<Person> mainStack, tempStack;
    int ticketCounter;

public:
    Queue() : ticketCounter(1) {}

    void enqueue(const string &name) {
        string ticket = "Ticket #" + formatTicket(ticketCounter++);
        Person newPerson(name, ticket);

        while (!mainStack.empty()) {
            tempStack.push(mainStack.top());
            mainStack.pop();
        }

        mainStack.push(newPerson);

        while (!tempStack.empty()) {
            mainStack.push(tempStack.top());
            tempStack.pop();
        }

        cout << newPerson.name << " added to the queue with " << newPerson.ticketNumber << endl;
        cout << "Queue size: " << mainStack.size() << endl;
    }

    void dequeue() {
        if (mainStack.empty()) {
            cout << "The queue is empty!" << endl;
            return;
        }

        Person frontPerson = mainStack.top();
        mainStack.pop();

        cout << "Dequeue: " << frontPerson.name << " received a ticket (" << frontPerson.ticketNumber << ")" << endl;
        cout << "Queue size: " << mainStack.size() << endl;

        if (!mainStack.empty()) {
            cout << "Next in line: " << mainStack.top().name << " (" << mainStack.top().ticketNumber << ")" << endl;
        }
    }

    void checkPosition(const string &nameOrTicket) {
        int position = 1;
        bool found = false;

        stack<Person> tempStackForPosition;

        while (!mainStack.empty()) {
            Person person = mainStack.top();
            mainStack.pop();
            tempStackForPosition.push(person);

            if (person.name == nameOrTicket || person.ticketNumber == nameOrTicket) {
                cout << person.name << " is at position " << position << " in the queue." << endl;
                found = true;
            }
            position++;
        }

        while (!tempStackForPosition.empty()) {
            mainStack.push(tempStackForPosition.top());
            tempStackForPosition.pop();
        }

        if (!found) {
            cout << "No one found with the name or ticket number: " << nameOrTicket << endl;
        }
    }

    bool isEmpty() const {
        return mainStack.empty();
    }

private:
    string formatTicket(int ticketNum) {
        stringstream ss;
        ss << setfill('0') << setw(3) << ticketNum;
        return ss.str();
    }
};

int main() {
    Queue concertQueue;
    int choice;
    bool firstChoice = true;

    auto lastDequeueTime = steady_clock::now();

    cout << "Welcome to Olivia Rodrigo's Concert Ticketing System!" << endl;

    while (true) {
        if (firstChoice) {
            cout << "\n1. Enqueue a person" << endl;
            cout << "2. Check your position in the queue" << endl;
            cout << "3. Exit" << endl;
            firstChoice = false;
        }

        cout << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            cout << "Enter the name: ";
            cin >> name;
            concertQueue.enqueue(name);
        } else if (choice == 2) {
            string nameOrTicket;
            cout << "Enter your name or ticket number: ";
            cin >> nameOrTicket;
            concertQueue.checkPosition(nameOrTicket);
        } else if (choice == 3) {
            cout << "Exiting the ticketing system." << endl;
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }

        auto currentTime = steady_clock::now();
        auto elapsed = duration_cast<minutes>(currentTime - lastDequeueTime);

        if (elapsed.count() >= 1 && !concertQueue.isEmpty()) {
            cout << "\n1 minute update" << endl;
            concertQueue.dequeue();
            lastDequeueTime = currentTime;
        }
    }

    return 0;
}
