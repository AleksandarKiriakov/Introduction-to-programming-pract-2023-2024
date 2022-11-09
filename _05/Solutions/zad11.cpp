// zad11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int startOfRow = 1;
	int endOfRow = num;

	for (int row = 1; row <= num; row++)
	{
		if (row % 2 == 1)
		{
			for (int i = startOfRow; i <= endOfRow; i++)
			{
				std::cout << i << " ";
			}
		}
		else
		{
			for (int j = endOfRow; j >= startOfRow; j--)
			{
				std::cout << j << " ";
			}
		}
		std::cout << std::endl;
		endOfRow += num;
		startOfRow += num;
	}
}

