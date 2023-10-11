// RemainderOnDivision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 6
    //Variable declaration
    int firstNumber;
    int secondNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    int remainder = (firstNumber >= secondNumber) ? (firstNumber % secondNumber) : (secondNumber & firstNumber);
    int divisor = (firstNumber >= secondNumber) ? (firstNumber / secondNumber) : (secondNumber / firstNumber);

    std::cout << "Divisor is: " << divisor << std::endl;
    std::cout << "Remainder on divison is: " << remainder;
}