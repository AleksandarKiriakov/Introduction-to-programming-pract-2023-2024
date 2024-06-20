// LevaToDollarsEx4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 4
    int leva;
    std::cout << "Input leva: ";
    std::cin >> leva;
    double dollars = leva * 0.54;
    double euros = leva * 0.51;

    std::cout << "Dollars: " << dollars;
    std::cout << "\nEuros: " << euros;
}