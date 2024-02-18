#include <bits/stdc++.h>

using namespace std;

int main() {
    char operation;
    double num1, num2, ans;
    bool valid = false;
    while (!valid) {
        cout << "Enter operator (+, -, *, /, %): ";
        cin >> operation;
        if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%') {
            valid = true;
        } else {
            cout << "Error: Invalid operator.Please enter a valid one." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');// Used to discard inv input
        }
    }
    cout << "Enter first number: ";
    while (!(cin >> num1)) {
        cout << "Error: Invalid input. Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter first number: ";
    }
    cout << "Enter second number: ";
    while (!(cin >> num2)) {
        cout << "Error: Invalid input. Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter second number: ";
    }
    if (operation == '+') {
        ans = num1 + num2;
    } else if (operation == '-') {
        ans = num1 - num2;
    } else if (operation == '*') {
        ans = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            ans = num1 / num2;
        } else {
            cerr << "Error: Division by zero is not allowed." << endl;
            return 1;
        }
    } else if (operation == '%') {
        if (num2 != 0) {
            ans = fmod(num1, num2);
        } else {
            cerr << "Error: Modulo by zero is not allowed." << endl;
            return 1;
        }
    }
    cout << "The answer is: " << ans << endl;
    return 0;
}