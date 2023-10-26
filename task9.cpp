#include <iostream>

using namespace std;

int calculate(int a, int b, char action) {
    switch(action) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': {
            if (action == '/' && b == 0) {
                cout << "Danger! Division by 0! Returning -1";
                return -1;
            } else {
                return a / b;
            }
        }
        default: return a + b;
    }
}

int main() {
    cout << calculate(5, 7, '*') << endl;
    cout << calculate(500, 57, '-') << endl;

    return 0;
}