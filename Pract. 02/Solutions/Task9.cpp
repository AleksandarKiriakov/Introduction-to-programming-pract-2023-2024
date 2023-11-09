// Task9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    cout << "Enter a: ";
    cin >> firstNumber;
    cout << "Enter b: ";
    cin >> secondNumber;
    cout << "Enter c: ";
    cin >> thirdNumber;

    if (firstNumber <= secondNumber && firstNumber <= thirdNumber) {
        cout << firstNumber << ' ';
        if (secondNumber < thirdNumber) {
            cout << secondNumber << ' ' << thirdNumber;
        }
        else {
            cout << thirdNumber << ' ' << secondNumber;
        }
    }
    else if (secondNumber <= firstNumber && secondNumber <= thirdNumber) {
        cout << secondNumber << ' ';
        if (firstNumber < thirdNumber) {
            cout << firstNumber << ' ' << thirdNumber;
        }
        else {
            cout << thirdNumber << ' ' << firstNumber;
        }
    }
    else {
        cout << thirdNumber << ' ';
        if (firstNumber < secondNumber) {
            cout << firstNumber << ' ' << secondNumber;
        }
        else {
            cout << secondNumber << ' ' << firstNumber;
        }
    }
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
