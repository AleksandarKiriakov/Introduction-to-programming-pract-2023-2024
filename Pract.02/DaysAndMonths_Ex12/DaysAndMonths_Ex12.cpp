// DaysAndMonths_Ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int day;
    int month;

    std::cout << "Day: ";
    std::cin >> day;

    std::cout << "Month: ";
    std::cin >> month;

    if (month % 2 != 0)
    {
        if (day == 31)
        {
            day = 1;
            month++;
        }
        else
        {
            day++;
        }
    }
    else if (month == 2)
    {
        if (day == 28)
        {
            day = 1;
            month++;
        }
        else
        {
            day++;
        }
    }
    else if (month == 12)
    {
        if (day == 31)
        {
            day = 1;
            month = 1;
        }
        else
        {
            day++;
        }
    }
    else
    {
        if (day == 30)
        {
            day = 1;
            month++;
        }
        else
        {
            day++;
        }
    }
    
    if (day > 9 && month > 9)
    {
        std::cout << "Next date: day " << day << ", month " << month;
    }
    else if (day > 9 && month < 10)
    {
        std::cout << "Next date: day " << day << ", month 0" << month;
    }
    else if (day < 10 && month > 9)
    {
        std::cout << "Next date: day 0" << day << ", month " << month;
    }
    else
    {
        std::cout << "Next date: day 0" << day << ", month 0" << month;
    }
    
}