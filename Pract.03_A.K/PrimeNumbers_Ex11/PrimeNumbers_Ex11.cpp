// PrimeNumbers_Ex11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //check again
    int firstNumber, secondNumber;
    cout << "Input a = ";
    cin >> firstNumber;
    cout << "Input b = ";
    cin >> secondNumber;

    bool result = false;

    int number = secondNumber / 2;

    for (int i = firstNumber; i <= secondNumber; i++)
    {
        for (int j = 2; j <= number; ++j)
        {
            if (i % j == 0)
            {
                result = false;
                break;
            }
            else
            {
                cout << i << " ";
            }
        }
    }
}