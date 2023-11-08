#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;
    char operation;

    do {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operation: ";
        cin >> operation;

        if(operation == '=') {
            cout << "Exitting calculator!";
            break;
        }

        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
        case '+': cout << num1 + num2 << endl; break;
        case '-': cout << num1 - num2 << endl; break;
        case '*': cout << num1 * num2 << endl; break;
        case '/': {
            while(num2 == 0) {
                cout << "Danger! Division by 0, please enter another second number: ";
                cin >> num2;
            }
            
            cout << num1 / num2 << endl; break;
        }
        default:
            break;
        }
        
    } while (operation != '=');
    

    return 0;
}