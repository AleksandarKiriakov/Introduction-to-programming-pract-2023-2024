// SortingNumbers_Ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //I have a mistake
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    std::cout << "First number = ";
    std::cin >> firstNumber;
    
    std::cout << "Second number = ";
    std::cin >> secondNumber;

    std::cout << "Third number = ";
    std::cin >> thirdNumber;

    if ((firstNumber <= secondNumber) && (secondNumber <= thirdNumber))
    {
        std::cout << firstNumber << " " << secondNumber << " " << thirdNumber;
    }
    else if ((secondNumber < firstNumber) && (firstNumber < thirdNumber))
    {
        std::cout << secondNumber << " " << firstNumber << " " << thirdNumber;
    }
    else if ((thirdNumber < firstNumber) && (firstNumber < secondNumber))
    {
        std::cout << thirdNumber << " " << firstNumber << " " << secondNumber;
    }
    else 
    {
        std::cout << thirdNumber << " " << secondNumber << " " << firstNumber;
    }
}
