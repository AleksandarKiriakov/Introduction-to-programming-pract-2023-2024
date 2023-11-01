// NumberInBinary_Ex10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void turningIntoBinary(int number)
{
	//works for numbers from 8-15, check again
	int binaryNumber = 0; //1011 = 
	int newNumber = 0;
	int counter = 0; //4

	do 
	{
		binaryNumber = number % 2; //1
		number /= 2;
		(newNumber += binaryNumber) *= 10;
		
		if (counter == 3)
		{
			newNumber /= 10;
		}
		counter++;
	} while (number != 0);

	double result = 0;

	//1101 - 1011

	for (int i = counter; i >= 1; i--)
	{
		result = newNumber % 10;
		cout << result;
		newNumber /= 10;
	}
}

int main()
{
	int number;
	cout << "Input number: ";
	cin >> number;

	turningIntoBinary(number);
}

