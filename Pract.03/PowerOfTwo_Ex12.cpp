// PowerOfTwo_Ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Input number: ";
	cin >> number;


	// 2 ^ x = number
	double secondNumber = sqrt(number);

	if (number == 1)
	{
		std::cout << "true";
	}
	else if (pow((int)(secondNumber), 2) == number)
	{
		std::cout << "true";
	}
	else 
	{
		std::cout << "false";
	}

}