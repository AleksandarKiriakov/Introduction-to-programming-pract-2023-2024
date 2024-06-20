// SolutionsOfAMathEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    //ex. 6 
    
    //a * x^2 + b * x + c = 0.

    // D = b * b - 4ac
    // D < 0 - n.r
    // D = 0 - twice the same solution
    // D > 0 - two solutions
    // x1,x2 = (-b +/- sqrt(D))/2a

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

    double firstSolution = 0;
    double secondSolution = 0;

    if (a != 0)
    {
        int discriminant = (b * b) - (4 * a * c);

        if (discriminant < 0)
        {
            std::cout << "The equation has no solutions!";
        }
        else if (!(discriminant))
        {
            firstSolution = -(b / (2.0 * a));
            std::cout << "x1,2 = " << firstSolution;

        }
        else
        {
            firstSolution = ((-b) + sqrt(discriminant)) / (2.0 * a);
            secondSolution = ((-b) - sqrt(discriminant)) / (2.0 * a);

            std::cout << "x1 = " << firstSolution << ", ";
            std::cout << "x2 = " << secondSolution;
        }
    }
    else
    {
        std::cout << "It is not a quadratic equation!";
    }
    
}