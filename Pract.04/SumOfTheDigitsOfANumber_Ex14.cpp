// SumOfTheDigitsOfANumber_Ex14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void getSumOfDigits(int number)
{
    unsigned int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number / 10 != 0)
        {
            sum += (number % 10);
            number /= 10;
            continue;
        }
        else
        {
            sum += number;
            break;
        }
    }

    unsigned int secondSum = 0;

    for (int i = 1; i <= sum; i++)
    {
        if (sum / 10 != 0)
        {
            secondSum += (sum % 10);
            sum /= 10;
            continue;
        }
        else
        {
            secondSum += sum;
            break;
        }
    }

    cout << secondSum;
}

int main()
{
    //check again
    int number;
    cout << "Input number: ";
    cin >> number;

    getSumOfDigits(number);
}
