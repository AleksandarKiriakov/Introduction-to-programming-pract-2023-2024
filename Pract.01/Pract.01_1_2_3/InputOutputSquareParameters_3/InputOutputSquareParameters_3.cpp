// InputOutputSquareParameters_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex 2
    //Variable declaration
    double width;
    double length;

    //Variable initialization
    std::cout << "Please enter the length of the first side: ";
    std::cin >> width;

    std::cout << "Please enter the length of the second side: ";
    std::cin >> length;

    double perimeter = 2 * (width + length);
    double area = width * length;

    //Print result
    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << area;
}
