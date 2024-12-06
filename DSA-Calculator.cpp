#include <iostream>
using namespace std;

int main() {
    string operation;
    int first_num, sec_num;
    
    cout << "Input your first number: ";
    cin >> first_num;
    cout << "Input operator: ";
    cin >> operation;
    cout << "Input your second number: ";
    cin >> sec_num;

    if (operation == "all") {
        int sum = first_num + sec_num;
        cout << "\n Total sum: " << sum;
        
        int subs = first_num - sec_num;
        cout << "\n Total difference: " << subs;

        int divide = first_num / sec_num;
        cout << "\n Total division: " << divide;

        int prod = first_num * sec_num;
        cout << "\n Total product: " << prod;

        int modulo = first_num % sec_num;
        cout << "\n Total modulo: " << modulo;
    }

    else if (operation == "+") {
        int sum = first_num + sec_num;
        cout << "Total sum: " << sum;
    }

    else if (operation == "-") {
        int subs = first_num - sec_num;
        cout << "\n Total difference: " << subs;
    }

    else if (operation == "/") {
        int divide = first_num / sec_num;
        cout << "\n Total division: " << divide;
    }

    else if (operation == "*") {
        int prod = first_num * sec_num;
        cout << "Total product: " << prod;
    }

    else if (operation == "%") {
        int modulo = first_num % sec_num;
        cout << "Total modulo: " << modulo;
    }

    else {
        cout << "Not recognized operator!";
    }
        
    return 0;
}
