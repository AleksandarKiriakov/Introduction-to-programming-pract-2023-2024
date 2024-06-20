// FindingBiggerNumber_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    int firstNumber;
    int secondNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    std::cout << ((firstNumber > secondNumber) ? firstNumber : secondNumber);
}