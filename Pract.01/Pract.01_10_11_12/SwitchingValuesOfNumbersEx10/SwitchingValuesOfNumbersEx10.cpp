// SwitchingValuesOfNumbersEx10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 10
    //Variable deffinition
    double firstNumber;
    double secondNumber;
    double thirdNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;
    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    thirdNumber = firstNumber;
    firstNumber = secondNumber;
    secondNumber = thirdNumber;

    //Print result
    std::cout << "First number = " << firstNumber << std::endl << "Second number = " << secondNumber;
}