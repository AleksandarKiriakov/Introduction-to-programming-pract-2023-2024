// Diamond_Ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //ex 8
    unsigned int number;

    do 
    {
        cout << "Input number between 2 and 9: ";
        cin >> number;
    } while (number < 2 || number > 9);

    char symbol;
    cout << "Input symbol: ";
    cin >> symbol;

    unsigned int symbolCount = 0;
    
    //decreasing spaces
    for (int i = number - 1, symbolCounter = 1; i >= 0; i--, symbolCounter += 2) 
    {
        int spaceIteration = i;
        int symbolIteration = 1; //symbolCounter;

        while (spaceIteration > 0)
        {
            cout << " ";
            spaceIteration--;
        }
        
        //incrementing symbolIteration until it is smaller than (symbolCounter + 1))
        while ( (symbolIteration % (symbolCounter + 1)) != 0) //1 % 2 = 1, 2 % 2 = 0, 3 % 2 = 1, 3 % 4 = 3
        {
            cout << symbol;
            symbolIteration++;
        }
        cout << endl;

        if (i == 0)
        {
            symbolCount = symbolCounter;
        }
    }

    int subtration = number - 1;

    //increasing spaces
    for (int i = 1, symbolCounter = symbolCount - 2; i <= number - 1; i++, symbolCounter -= 2)
    {
        int spaceIteration = i;
        int symbolIteration = 1; //symbolCounter;

        while (spaceIteration > 0)
        {
            cout << " ";
            spaceIteration--;
        }

        //incrementing symbolIteration until it is smaller than (symbolCounter + 1))
        while ((symbolIteration % (symbolCounter + 1)) != 0) //1 % 2 = 1, 2 % 2 = 0, 3 % 2 = 1, 3 % 4 = 3
        {
            cout << symbol;
            symbolIteration++;
        }

        //another way
        //for ( ; symbolIteration < (symbolCounter + 1); symbolIteration++)
        //{
        //    break;
        //}

        cout << endl;
    }
}
