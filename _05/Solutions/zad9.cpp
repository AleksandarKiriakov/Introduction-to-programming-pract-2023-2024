// zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int row = 1; row <= num; row++)
	{
		for (int freeSpaces = num - row; freeSpaces > 0; freeSpaces--)
		{
			std::cout << " ";
		}

		for (int digit = row; digit >= 1; digit--)
		{
			std::cout << digit << "";
		}
		std::cout << std::endl;
	}

	for (int row = num - 1; row >= 0; row--)
	{
		for (int freeSpaces = num - row; freeSpaces > 0; freeSpaces--)
		{
			std::cout << " ";
		}
		for (int j = row; j >= 1; j--)
		{
			std::cout << j << "";
		}
		std::cout << std::endl;
	}
}

