// ApplesPearsBananasEx7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex.7
    //Variable deffinition
    int apples;
    int pears;
    int bananas;

    std::cout << "Apples: ";
    std::cin >> apples;

    std::cout << "Pears: ";
    std::cin >> pears;

    std::cout << "Bananas: ";
    std::cin >> bananas;

    //Print result
    std::cout << "Pesho, don't forget to buy " << apples << " apples, " << pears << " pears, " << bananas << " bananas!";
}