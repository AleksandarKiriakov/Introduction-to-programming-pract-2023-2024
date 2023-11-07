// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

    void mathOperations(int& number1, int& number2, int& number3) {
        number2 -= number1;
        number1 *= 2;
        number3 += 10;
    }

    int main()
    {
        int number1, number2, number3;
        cout << "Enter number1: ";
        cin >> number1;
        cout << "Enter number2: ";
        cin >> number2;
        cout << "Enter number3: ";
        cin >> number3;

        mathOperations(number1, number2, number3);
        cout << number1 << " " << number2 << " " << number3;
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
