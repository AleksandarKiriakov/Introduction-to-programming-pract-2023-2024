// BigPositiveNumber_Ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int validation(int number)
{
    do
    {
        cout << "Input number: ";
        cin >> number;
    } while (number < 100 || number > 100000);

    return number;
}

void closestNumber(int number)
{
    int newNumber = sqrt(number);

    if (pow(newNumber, 2) <= number)
    {
        cout << newNumber << "^2 = " << number;
    }
}

int main()
{
    int number = 0;
    number = validation(number);

    closestNumber(number);
}