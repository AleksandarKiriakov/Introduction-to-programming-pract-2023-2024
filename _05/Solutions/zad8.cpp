// cikli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num;
    std::cin >> num;

	for (int row = 1; row <= num; row++)
	{
		for (int symbolsCount = 1; symbolsCount <= row; symbolsCount++)
		{
			std::cout << "$ ";
		}
		std::cout << std::endl;
	}
}
