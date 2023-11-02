// PowerNumber_Ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int pow(int number, unsigned power) 
{
    int newNumber = 1;
    for (int i = 1; i <= power; i++)
    {
        newNumber *= number; // 2 * 2 = 4, 
    }     

    return newNumber;
}

int main()
{
    //Variable declaration
    int number;
    unsigned power;

    cout << "Input number: ";
    cin >> number;

    cout << "Input power: ";
    cin >> power;

    cout << pow(number, power);
}