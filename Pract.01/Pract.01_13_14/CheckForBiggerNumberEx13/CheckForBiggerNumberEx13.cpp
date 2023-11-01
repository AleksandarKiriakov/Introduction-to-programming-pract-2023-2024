// CheckForBiggerNumberEx13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    // ex. 13
    //Variable deffinition
    int firstNumber;
    int secondNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;
    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    std::string result = (firstNumber == secondNumber) ? "false" : "true";

    //Print result
    std::cout << result;
}

