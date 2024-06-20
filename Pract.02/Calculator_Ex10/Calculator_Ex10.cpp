// Calculator_Ex10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double firstNumber;
    double secondNumber;

    double sum = 0;
    double subtraction = 0;
    double multiplication = 0;
    double division = 0;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    if (secondNumber != 0)
    {
        sum = firstNumber + secondNumber;
        subtraction = firstNumber - secondNumber;
        multiplication = firstNumber * secondNumber;
        division = firstNumber / secondNumber;
    }
    else
    {
        std::cout << "Pick a different number aside from 0 for a second unput!";
    }

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Subtraction = " << subtraction << std::endl;
    std::cout << "Multiplication = " << multiplication << std::endl;
    std::cout << "Division = " << division;

}