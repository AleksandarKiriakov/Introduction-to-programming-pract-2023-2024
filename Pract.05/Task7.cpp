// Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void reverseNumber(int& number) {
    int copyOfNumber = number;
    number = 0;
    while (copyOfNumber > 0) {
        number *= 10;
        number += copyOfNumber % 10;
        copyOfNumber /= 10;
    }
}

int sumAllDigitsWithSecondNumber(int n1, int n2) {
    int result = 0;
    while (n1 > 0) {
        result *= 10;
        int currentDigitToAdd = (n1 % 10) + n2;
        n1 /= 10;
        if (currentDigitToAdd >= 10) {
            result += currentDigitToAdd % 10;
        }
        else {
            result += currentDigitToAdd;
        }
    }
    return result;
}

int main()
{
    int number1, number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number (1-9): ";
    do {
        cin >> number2;
    } while (number2 <= 0 || number2 > 9);

    int result = sumAllDigitsWithSecondNumber(number1, number2);
    reverseNumber(result);
    cout << result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
