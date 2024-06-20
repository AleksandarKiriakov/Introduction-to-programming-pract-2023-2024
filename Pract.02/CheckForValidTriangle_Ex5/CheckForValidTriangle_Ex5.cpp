// CheckForValidTriangle_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 5

    /*Напишете програма, която приема от входа три числа - страни на триъгълник.
    Програмата да проверява дали това е валиден триъгълник.*/

    //Variable declaration
    int a;
    int b;
    int c;

    //Input values
    std::cout << "a = ";
    std::cin >> a;

    std::cout << "b = ";
    std::cin >> b;

    std::cout << "c = ";
    std::cin >> c;

    int sumAB = a + b;
    int sumAC = a + c;
    int sumBC = b + c;

    //Check for a validation
    if ((a < b) && (b < c) || (b < a) && (a < c))
    {
        if (sumAB > c)
        {
            std::cout << "It is a triangle!";
        }
    }
    else if ((a < c) && (c < b) || (c < a) && (a < b))
    {
        if (sumAC > b)
        {
            std::cout << "It is a triangle!";
        }
    }
    else if ((b < c) && (c < a) || (c < b) && (b < a))
    {
        if (sumBC > a)
        {
            std::cout << "It is a triangle!";
        }
    }
    else if ((a == b) && (b == c))
    {
        std::cout << "It is a triangle!";
    }
    else
    {
        std::cout << "It's not a triangle!";
    }


}   