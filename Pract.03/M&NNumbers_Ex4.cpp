// M&NNumbers_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int firstNumber, secondNumber;

    do 
    {
        cout << "Input first number: ";
        cin >> firstNumber;

        cout << "Input second number: ";
        cin >> secondNumber;
    } while (firstNumber <= 0 && secondNumber <= 0);

    int counter = 1;

    for (int columns = 0; columns < firstNumber; columns++)
    {
        for (int rows = 0; rows < secondNumber; rows++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }


}
