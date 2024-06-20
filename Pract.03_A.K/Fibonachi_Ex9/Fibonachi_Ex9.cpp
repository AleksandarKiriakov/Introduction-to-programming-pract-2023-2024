// Fibonachi_Ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //ex 9
    unsigned int number;

    do
    {
        cout << "Input number: ";
        cin >> number;
    } while (number <= 3);

    //1, 1, 2, 3, 5, 8, 13, 21, 34, 55.
    unsigned int sum = 0;
    unsigned int numberN = 2;
    unsigned int numberM = 1;

    do
    {
        if (sum == 0)
        {
            sum = numberN + numberM;
            numberM = numberN;
            numberN = sum;
            cout << "1 1 ";
        }
        else
        {
            numberN = sum;
            sum = numberN + numberM;
            numberM = numberN;
        }
        cout << numberM << " ";
    } while (sum < number);
}