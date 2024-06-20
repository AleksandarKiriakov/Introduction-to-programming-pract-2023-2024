// SumOfTwos_Ex13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //ex 13
    int number;

    do
    {
        cout << "Input number: ";
        cin >> number;
    } while (number < 0);


    if (number % 2 != 0)
    {
        int digitHolder = 0;
        int sum = 0;

        for (int i = 0; i < number; i++)
        {
            digitHolder = number % 10; //5
            int power = i;
            
            if (power < number - 1)
            {
                while (sum < digitHolder) // 2 ^ 0 = 1, 2 ^ 1 = 2 + 1
                {
                    sum += pow(2, power); // 0 + 1 = 1
                    cout << "2^" << power << " + ";
                    power++;
                }
            }
            else
            {
                while (sum < digitHolder) // 2 ^ 0 ,
                {
                    sum += pow(2, power);
                    cout << "2^" << power;
                    power++;
                }
            }

            number = number - sum;
        }
    }
    
    




    //if (number % 2 == 0)
    //{

    //}
    //else
    //{
    //    //15
    //    unsigned int result;
    //    unsigned int newNumber = 0;
    //    //unsigned int singleDigit = 0;
    //    unsigned int digitCounter = 0;

    //    /*for (int i = number; i >= 0; i /= 10)
    //    {

    //        newNumber = number % 10;

    //        for (int i = 0; i < length; i++)
    //        {

    //        }
    //    }*/



    //    int numberHolder = 0;
    //    for (int i = 0; i < number; i++)
    //    {
    //        int digitHolder = i;

    //        newNumber = number % 10; // 5

    //        if (digitHolder == (number - 1))
    //        {
    //            while (pow(2, digitHolder) < newNumber)
    //            {
    //                digitCounter++;
    //                cout << "2^" << digitHolder;
    //                digitHolder++;
    //            }
    //        }
    //        else
    //        {
    //            while (pow(2, digitHolder) < newNumber)
    //            {
    //                digitCounter++;
    //                cout << "2^" << digitHolder << " + ";
    //                digitHolder++;
    //            }
    //        }
    //        
    //        numberHolder = number - newNumber;
    //        newNumber = number / 10;
    //        
    //    }
    //}

    
   


}