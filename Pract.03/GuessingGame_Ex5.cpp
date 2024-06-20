// GuessingGame_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex 5
    int number;

    do 
    {
        std::cout << "Input number: ";
        std::cin >> number;
    } while (number < 0 || number > 100);
    
    for (int i = 0; i < 50; i++)
    {
        std::cout << std::endl;
    }

    unsigned counter = 0;
    int secondNumber = 0;

    do
    {
        std::cin >> secondNumber;

        if (number < secondNumber)
        {
            std::cout << "You need to go lower..." << std::endl;
        }
        else
        {
            std::cout << "The secret is higher..." << std::endl;
        }

        counter++;

    } while (number != secondNumber);

    std::cout << "Congratulations!You guessed that " << secondNumber << " is the secret number.It took you " << counter << " tries.";
}