// zad12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if (i == 1 && j == 1 || i == 1 && j == num || i == num && j == 1 || i == num && j == num)
			{
				std::cout << "+ ";
			}
			else if (i > 1 && i < num && (j == 1 || j == num))
			{
				std::cout << "| ";
			}
			else
			{
				std::cout << "- ";
			}
		}
		std::cout << std::endl;
	}
}
