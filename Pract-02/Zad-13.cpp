// Zad-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// take 4-ditgit number as input
	int num;
	cout << "Enter a 4-digit number: "; // 3332
	cin >> num;

	// Assign all the first and last digit of the 4-digit number to variables
	int firstDigit = num / 1000;
	int lastDigit = num - ((num / 10) * 10);

	// 2-digit number created by the 1st and 4th digit of the input
	int num1 = firstDigit * 10 + lastDigit;

	// 2-digit number created by the 2nd and 3rd digit of the input
	int num2 = ((num - (firstDigit * 1000)) - lastDigit) / 10;

	// Compare the new numbers and print if the first is greater, lower or equal to the second one with words and math expression
	cout << ((num1 > num2) ? "greater (" : ((num1 < num2) ? "less (" : "equal (")) << num1
		<< ((num1 > num2) ? ">" : ((num1 < num2) ? "<" : "=")) << num2 << ")";
}
