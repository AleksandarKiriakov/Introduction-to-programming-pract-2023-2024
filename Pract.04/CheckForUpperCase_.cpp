// CheckForUpperCase_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool checkSymbol(char symbol)
{
    if (symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void isCapitalLetter(char symbol)
{
    if (symbol >= 'A' && symbol <= 'Z')
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
    char symbol;
    cout << "Input symbol: ";
    cin >> symbol;

    if (checkSymbol(symbol))
    {
        isCapitalLetter(symbol);
    }

}

