// Zad-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int firstDigit, secondDigit, thirdDigit;
	cout << "Enter the first digit: ";
	cin >> firstDigit;
	cout << "Enter the second digit: ";
	cin >> secondDigit;
	cout << "Enter the third digit: ";
	cin >> thirdDigit;

	int biggestDigit = firstDigit;
	int secondBiggestDigit = firstDigit;
	int lowestDigit = firstDigit;

	if (secondDigit > biggestDigit) {
		biggestDigit = secondDigit;
	}
	if (thirdDigit > biggestDigit) {
		biggestDigit = thirdDigit;
	}

	if (thirdDigit != biggestDigit && thirdDigit < lowestDigit) {
		lowestDigit = thirdDigit;
	}
	if (secondDigit != biggestDigit && secondDigit < lowestDigit) {
		lowestDigit = secondDigit;
	}

	if (secondDigit != biggestDigit && secondDigit != lowestDigit) {
		secondBiggestDigit = secondDigit;
	}
	if (thirdDigit != biggestDigit && thirdDigit != lowestDigit) {
		secondBiggestDigit = thirdDigit;
	}

	int biggestPossibleNumber = biggestDigit * 100 + secondBiggestDigit * 10 + lowestDigit;
	cout << biggestPossibleNumber;
}

