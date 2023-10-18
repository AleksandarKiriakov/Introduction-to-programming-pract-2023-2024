// Zad-06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	cout << "Enter the third number: ";
	cin >> num3;

	int d = num2 * num2 - 4 * num1 * num3;
	if ( num1 == 0 && num2 != 0) {
		int x = -num3 / num2;
		cout << "There is only one root: " << x;
	} else if ( d < 0 || (num1 == 0 && num2 == 0)) {
		cout << "Theres are no real roots";
	} else if ( d == 0 ) {
		int x = -num2 / (2 * num1);
		cout << "There is only one root: " << x;
	} else {
		int x1 = (-num2 + sqrt(d)) / (2 * num1);
		int x2 = (-num2 - sqrt(d)) / (2 * num1);
		cout << "There are to roots: " << x1 << ", " << x2;
	}
}

