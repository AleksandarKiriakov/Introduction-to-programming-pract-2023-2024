// LeapYear_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int year;
	std::cout << "Input year: ";
	std::cin >> year;

	if ((year % 2) == 0 && !((year % 100) == 0) || (year % 400) == 0)
	{
		std::cout << "It's a leap year!";
	}
	else
	{
		std::cout << "It's not a lear year!";
	}
	 
}