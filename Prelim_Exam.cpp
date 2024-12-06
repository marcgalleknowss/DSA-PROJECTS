#include<iostream>

using namespace std;



int main() {

    string choice;

    string b;

    string c;

    c[0] = {};



    cout << "Your To-Do List is empty." << endl;

    cout << "\n";

    cout << "Add a task: ";

    getline(cin,choice);

    c = b + "\n";



    do {

        cout << "Add another task? (y/n): ";

        getline(cin,choice);

            if (choice != "y") {

                break;

            }else {

                cout << "Add a task: ";

                getline(cin,b);

                c += b + "\n";

            }

    } while (choice == "y");



    cout << "\nYour To-Do List: \n";

    cout << c;

    return 0;




}