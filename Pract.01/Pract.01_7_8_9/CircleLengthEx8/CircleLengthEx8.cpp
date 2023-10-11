// CircleLengthEx8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 8
    //Variable deffinition
    int radius;
    const double pi = 3.14159265;

    std::cout << "Input radius: ";
    std::cin >> radius;

    double circleLength = 2 * pi * (radius * radius);
    
    //another way using a method, but be careful while using the double type
    //double circleLength = 2 * pi * pow(radius, 2);

    //Print result
    std::cout << circleLength;
}
