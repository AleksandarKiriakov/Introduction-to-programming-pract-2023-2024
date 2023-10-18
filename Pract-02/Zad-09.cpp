// Zad-09.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	int biggest = num1;
	int secondBiggest = num1;
	int lowest = num1;

	if (num2 > biggest) {
		biggest = num2;
	}
	if (num3 > biggest) {
		biggest = num3;
	}

	if (num3 != biggest && num3 < lowest) {
		lowest = num3;
	}
	if (num2 != biggest && num2 < lowest) {
		lowest = num2;
	}

	if (num2 != biggest && num2 != lowest) {
		secondBiggest = num2;
	}
	if (num3 != biggest && num3 != lowest) {
		secondBiggest = num3;
	}

	cout << biggest << ", " << secondBiggest << ", " << lowest;
}

