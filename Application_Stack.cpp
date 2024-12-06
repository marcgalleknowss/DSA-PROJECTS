#include <iostream>
#include <stack>
#include <string>
using namespace std;

int getPrecedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int calculate(int num1, int num2, char op) {
    if (op == '+') return num1 + num2;
    if (op == '-') return num1 - num2;
    if (op == '*') return num1 * num2;
    if (op == '/') return num1 / num2;
    return 0;
}

int evaluateExpression(string expr) {
    stack<int> numbers;
    stack<char> operators;

    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == ' ') continue;

        if (isdigit(expr[i])) {
            int value = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                value = (value * 10) + (expr[i] - '0');
                i++;
            }
            numbers.push(value);
            i--;
        }
        else if (expr[i] == '(') {
            operators.push(expr[i]);
        }
        else if (expr[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                int num2 = numbers.top(); numbers.pop();
                int num1 = numbers.top(); numbers.pop();
                char op = operators.top(); operators.pop();
                numbers.push(calculate(num1, num2, op));
            }
            operators.pop();
        }
        else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            while (!operators.empty() && getPrecedence(operators.top()) >= getPrecedence(expr[i])) {
                int num2 = numbers.top(); numbers.pop();
                int num1 = numbers.top(); numbers.pop();
                char op = operators.top(); operators.pop();
                numbers.push(calculate(num1, num2, op));
            }
            operators.push(expr[i]);
        }
    }

    while (!operators.empty()) {
        int num2 = numbers.top(); numbers.pop();
        int num1 = numbers.top(); numbers.pop();
        char op = operators.top(); operators.pop();
        numbers.push(calculate(num1, num2, op));
    }

    return numbers.top();
}

int main() {
    string expression;

    cout << "Enter a mathematical expression: ";
    getline(cin, expression);

    int result = evaluateExpression(expression);

    cout << "The result is: " << result << endl;

    return 0;
}
