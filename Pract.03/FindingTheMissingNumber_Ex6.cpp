// FindingTheMissingNumber_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int numberLength;
    cout << "Input number: ";
    cin >> numberLength;

    int sum = 0;
    int newSum = 0;

    for (int i = 1; i <= numberLength; i++)
    {
        sum += i;
    }

    for (int i = 1; i < numberLength; i++)
    {
        int newNumbers;

        cin >> newNumbers;


        newSum += newNumbers;
    }

    int missingNumber = sum - newSum;

    cout << "The missing number is " << missingNumber;

}

