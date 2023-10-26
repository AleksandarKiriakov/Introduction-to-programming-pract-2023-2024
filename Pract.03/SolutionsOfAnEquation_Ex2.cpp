// SolutionsOfAnEquation_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    //x + y = n.
    int x = 1;
    int y = number - 1;
    
    for (int x = 1; x < number; x++)
    {
        y = number - x;

        std::cout << "x = " << x << " y = " << y << std::endl;
    }

}
