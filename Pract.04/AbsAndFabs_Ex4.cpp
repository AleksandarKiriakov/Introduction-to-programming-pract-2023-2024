// AbsAndFabs_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//The abs() is used for integer data type. 
//The fabs() is used for int, float, double, 
// and char data types.

int abs(int num)
{
    if (num < 0)
    {
        num *= (-1);
    }

    return num;
}

double fabs(double num)
{
    if (num < 0)
    {
        num *= (-1);
    }

    return num;
}

int main()
{
    double num;
    cout << "Input number: ";
    cin >> num;

    cout << "Abs: " << abs(num);
    cout << "Fabs: " << fabs(num);
}

