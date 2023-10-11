// NumbersInOrderEx5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 5
    //Variable declaration
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    std::cout << "Input third number: ";
    std::cin >> thirdNumber;

    std::string numbersInOrderCheck = (firstNumber <= secondNumber && secondNumber <= thirdNumber) ? "true" : "false";

    std::cout << numbersInOrderCheck;
}
