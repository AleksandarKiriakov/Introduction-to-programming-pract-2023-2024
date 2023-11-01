// EvenNumber_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void isEven(int number)
{
    if (number % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    isEven(number);
}
