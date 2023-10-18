// Zad-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	char operation;
	cout << "Enter operation to be used on the two numbers with options including +, -, *, /: ";
	cin >> operation;

	switch (operation) {
		case '+': cout << num1 + num2;  break;
		case '-': cout << num1 - num2;  break;
		case '*': cout << num1 * num2;  break;
		case '/': if (num2 != 0) {
			cout << num1 / num2;
		} else {
			cout << "You cannot divide by 0";
		} break;
	}
}
