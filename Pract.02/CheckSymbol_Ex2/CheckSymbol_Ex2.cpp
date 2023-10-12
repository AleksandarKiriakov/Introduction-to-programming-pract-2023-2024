// CheckSymbol_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Variable declaration
    char symbol;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    //if (symbol >= 65 && symbol <= 90 || symbol >= 97 && symbol <= 122) - from the ascii table
    if (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z')
    {
        switch (symbol)
        {
        case 'a':
        case 'A':
        case 'o':
        case 'O':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'u':
        case 'U': std::cout << "The letter is a vowel!"; break;
        default: std::cout << "The letter is not a vowel!";
            break;

        }
    }
}
