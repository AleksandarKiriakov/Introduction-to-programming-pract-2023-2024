// SumOfTwoNumbers_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int a, b;
    cout << "Input first number: ";
    cin >> a;

    cout << "Input second number: ";
    cin >> b;

    //both work
    /*int result = sum(a, b);
    cout << result;*/

    cout << sum(a, b); 
}
