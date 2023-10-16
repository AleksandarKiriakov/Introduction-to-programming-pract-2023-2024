// UpperAndLowerCaseLetter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
    char input = 'c'; // Replace 'c' with your desired letter
    char uppercase = toupper(input);
    std::cout << "Uppercase: " << uppercase << std::endl;

    char letter;

    std::cout << "Input letter: ";
    std::cin >> letter;
    
    if (letter >= 'A' && letter <= 'Z')
    {
        letter += 32;
        //a different way will be by using toupper() method
        // letter = tolower(letter);
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        letter -= 32;
        //letter = toupper(letter);
    }
    else
    {
        std::cout << "Invalid character";
    }
    
    std::cout << letter;
}

