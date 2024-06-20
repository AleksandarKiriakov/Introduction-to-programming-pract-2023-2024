#include <iostream>
using namespace std;

int calculate(int num1, int num2, char action) {
	int res = 0;
	switch (action) {
	case '+': res = num1 + num2;  break;
	case '-': res = num1 - num2;  break;
	case '*': res = num1 * num2;  break;
	case '/': res = num1 / num2;  break;
	default: cout << "Wrong action" << endl;
	}
	return res;
}

main() {
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	char action;
	cout << "Enter an action: ";
	cin >> action;
	cout << calculate(num1, num2, action);
}