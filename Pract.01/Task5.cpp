// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    cout << "Please enter the first number: ";
    double firstNumber;
    cin >> firstNumber;

    cout << "Please enter the second number: ";
    double secondNumber;
    cin >> secondNumber;

    cout << "Please enter the thirt number: ";
    double thirdNumber;
    cin >> thirdNumber;

    bool isItAscending = firstNumber < secondNumber && secondNumber < thirdNumber;
    cout <<"It's Ascending: " << isItAscending;
}

