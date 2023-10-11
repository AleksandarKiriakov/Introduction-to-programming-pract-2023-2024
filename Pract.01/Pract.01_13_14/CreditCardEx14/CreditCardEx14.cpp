// CreditCardEx14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 14
    //Variable deffinition
    int password;
    int units; //I use short int because it is 2 bytes compared to int which is 4
    int dozens;
    int hundreds;
    int thousands;

    std::cout << "Type 16-digit password: ";
    std::cin >> password;

    units = password % 10;
    dozens = password / 10 % 10;
    hundreds = password / 100 % 10;
    thousands = password / 1000 % 10;

    std::cout << "XXXXXXXXXXXX" << thousands << hundreds << dozens << units;
}