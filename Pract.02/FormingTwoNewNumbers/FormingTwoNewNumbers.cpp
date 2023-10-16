// FormingTwoNewNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //ex. 13
    int fourDigitNumber;
    
    cout << "Input a four digit number: ";
    cin >> fourDigitNumber;

    int firstNumber = (((fourDigitNumber / 1000) * 10) + (fourDigitNumber % 10));
    int secondNumber = (((fourDigitNumber / 100 % 10) * 10) + (fourDigitNumber / 10 % 10));

    if (firstNumber < secondNumber)
    {
        cout << "less (" << firstNumber << "<" << secondNumber << ")";
    }
    else if (secondNumber < firstNumber)
    {
        cout << "more (" << firstNumber << ">" << secondNumber << ")";
    }
    else
    {
        cout << "equal (" << firstNumber << "=" << secondNumber << ")";
    }
}
