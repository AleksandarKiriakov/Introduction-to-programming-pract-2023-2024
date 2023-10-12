// OutputGrade_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    //Variable declaration
    std::string result = "";
    int percentageGrade;
    std::cout << "Input percentage: ";
    std::cin >> percentageGrade;

    if (percentageGrade >= 90)
    {
        result = "6+";
    }
    else if (percentageGrade >= 80)
    {
        result = "6";
    }
    else if (percentageGrade >= 70)
    {
        result = "5";
    }
    else if (percentageGrade >= 60)
    {
        result = "4";
    }
    else if (percentageGrade >= 40)
    {
        result = "3";
    }
    else if (percentageGrade < 40)
    {
        result = "2";
    }
    else 
    {
        result = "Invalid number";
    }

    std::cout << "Grade: " << result;
}