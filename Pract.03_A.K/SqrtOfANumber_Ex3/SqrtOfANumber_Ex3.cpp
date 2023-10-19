// SqrtOfANumber_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    /*Вход: 10
    Изход: 1

    Вход: 25
    Изход: 526*/

    unsigned int number = 0;    

    do 
    {
        std::cout << "Input positive number: ";
        std::cin >> number;
    } while ((number <= 0));

    unsigned int newNumber = number * number;
    unsigned int reversedNumber = 0;
    
    while (newNumber != 0)
    {
        //625, 62, 6
        reversedNumber *= 10; //0* 10 = 0, 50
        reversedNumber += newNumber % 10; // 0 + 5 = 5, 50+2 = 52 + 6 = 
        newNumber /= 10;
    }

    std::cout << reversedNumber;

}