// RightTriangle_Ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //ex 7
    unsigned int number;
    cout << "Input number: ";
    cin >> number;
    unsigned int powerC = 0;

    for (int a = 1; a < number; a++)
    {
        for (int b = 1; b < number; b++)
        {
            for (int c = 1; c < number; c++)
            {
                powerC = c * c;

                if (powerC == (a * a) + (b * b))
                {
                    cout << a << " " << b << " " << c;
                    cout << endl;
                    break;
                }
            }
        }
    }


}

