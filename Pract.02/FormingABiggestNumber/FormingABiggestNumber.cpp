// FormingABiggestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 11
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    std::cout << "Input third number: ";
    std::cin >> thirdNumber;

    int max = firstNumber;
    int min = firstNumber;
    int middle = firstNumber;

    if (max < secondNumber)
    {
        max = secondNumber;

        if (thirdNumber < min)
        {
            min = thirdNumber;
            middle = firstNumber;
        }
        else if (secondNumber < thirdNumber)
        {
            max = thirdNumber;
            middle = secondNumber;
        }
        else
        {
            middle = thirdNumber;
        }
        std::cout << max << middle << min;
    }
    else if (max < thirdNumber)
    {
        max = thirdNumber;

        if (secondNumber < min)
        {
            min = secondNumber;
            middle = firstNumber;
        }
        else
        {
            middle = secondNumber;
            min = firstNumber;
        }
        std::cout << max << middle << min;
    }
    else 
    {
        std::cout << firstNumber << secondNumber << thirdNumber;
    }
}
