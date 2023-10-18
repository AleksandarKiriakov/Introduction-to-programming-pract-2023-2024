// Zad-05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Enter the first side of a triangle: ";
	cin >> num1;

	cout << "Enter the second side of a triangle: ";
	cin >> num2;

	cout << "Enter the third side of a triangle: ";
	cin >> num3;

	int biggestSide = num1;
	if (num2 > biggestSide) {
		biggestSide = num2;
	}
	if (num3 > biggestSide) {
		biggestSide = num3;
	}

	if ( num1 == biggestSide && num1 < (num2 + num3) ||
		num2 == biggestSide && num2 < (num1 + num3) ||
		num3 == biggestSide && num3 < (num1 + num2) ) {
		cout << "It is a valid triangle";
	} else {
		cout << "It is not a valid triangle";
	}
}

