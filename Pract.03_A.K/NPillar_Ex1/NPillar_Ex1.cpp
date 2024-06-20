// NPillar_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int number;
	std::cout << "Input number: ";
	std::cin >> number;

	int newNumber = 0;

	for (int i = 1; i <= number; i++)
	{
		if (i == 1)
		{
			std::cout << i << std::endl;
			newNumber = i * 10;
		}
		else
		{
			newNumber += i;
			std::cout << newNumber << std::endl;
			newNumber *= 10;
		}
	}
}
