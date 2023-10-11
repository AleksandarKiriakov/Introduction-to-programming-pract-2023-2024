// Mim(Max)OfTwoNumbersEx11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    //ex. 11
    //Variable deffinition
    int firstNumber;
    int secondNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;
    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    std::string result = (firstNumber > secondNumber) ? "The " + std::to_string(firstNumber) + " number is the maximum and the " +
    std::to_string(secondNumber) + " number is the minimum." : "The " + std::to_string(secondNumber) + 
        " number is maximum and the " + std::to_string(firstNumber) + " number is the minimum.";

    //Print result
    std::cout << result;
}