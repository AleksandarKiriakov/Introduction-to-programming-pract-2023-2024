// ChangingNumber_Ex10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //check again
    int number;
    cout << "Input number: ";
    cin >> number;
    
    int newNumber = number;
    unsigned int digitCounter = 0;
    do 
    {
        newNumber /= 10;
        digitCounter++;
        
    }while (newNumber != 0);

    unsigned tensCounter = digitCounter;

    if (digitCounter % 2 == 0) //4
    {

    }
    else
    {
        //digitCounter = 51234, digitMiddle = 3
        unsigned int digitMiddle = (digitCounter / 2) + 1;

        for (int i = 1; i < digitMiddle; i++)
        {
            newNumber = number / 10;

        }

        //512

        unsigned int digitCnt = 1;
        do 
        {
            digitCnt *= 10; 
            digitMiddle--;   
        } while (digitMiddle != 1);

        //newNumber = 2 *  
        newNumber = (newNumber % 10) * digitCnt;
    }

    newNumber = (number - newNumber) + 1;

    cout << newNumber;
}   
