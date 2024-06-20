// QuadraticEquationEx9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 9
    //Variable deffinition
    int a;
    int b;
    int c;

    std::cout << "Input a: ";
    std::cin >> a;
    std::cout << "Input b: ";
    std::cin >> b;
    std::cout << "Input c: ";
    std::cin >> c;


    // x1,x2 = -b +- sqrt(pow(b,2) - 4ac)/2a
    double result1 = (-b - sqrt(pow(b,2)-(4*a*c))) / 2 * a;
    double result2 = (-b + sqrt(pow(b,2)-(4*a*c))) / 2 * a;

    //Print result
    std::cout << "x1 = " << result1 << ", x2 = " << result2;
}