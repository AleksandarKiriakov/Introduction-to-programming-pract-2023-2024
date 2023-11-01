// PositiveOrNegative_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void isPositive(int number)
{
	if (number >= 0)
	{
		cout << "The number is positive";
	}
}

void isNegative(int number)
{
	if (number < 0)
	{
		cout << "The number is negative";
	}
}

int main()
{
	int number;
	cout << "Input number: ";
	cin >> number;


	isPositive(number);
	isNegative(number);
}

