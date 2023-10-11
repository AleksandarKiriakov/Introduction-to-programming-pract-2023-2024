// PerimeterAndAreaOfASquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex 2
    //Variable initialization
    double width = 5.4;
    double length = 7.9;

    double perimeter = 2 * (width + length);
    double area = width * length;

    //Print result
    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << area;
}
