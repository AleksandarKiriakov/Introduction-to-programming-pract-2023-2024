// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    cout << "Please enter the length of the first side: ";
    double a;
    cin >> a;
    cout << "Please enter the length of the second side: ";
    double b;
    cin>>b;
    double p = 2 * a + 2 * b;
    double s = a * b;
    cout << "P = " << p << endl << "S = " << s << endl;
}

