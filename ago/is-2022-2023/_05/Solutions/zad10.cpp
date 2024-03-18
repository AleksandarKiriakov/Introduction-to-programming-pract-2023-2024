// zad10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int diff = 0;
	int n = num;

	for (int row = 1; row <= num; row++)
	{
		int column = 1;
		for (int digit = 1; digit <= num * num; digit += num)
		{
			if (column % 2 == 1)
			{
				std::cout << digit + row - 1 << " ";
			}
			else
			{
				std::cout << 2 * n - diff << " ";
				n *= 2;
			}
			column++;
		}
		diff++;
		n = num;
		std::cout << std::endl;
	}
}
