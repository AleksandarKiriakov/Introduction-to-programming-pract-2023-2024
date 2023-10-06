// Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    double bgn;
    cout << "Please enter amount of money in BGN"<<endl;
    cin >> bgn;
    double toEuro = bgn * 0.51;
    double toUSD = bgn * 0.54;
    cout << "Euro: "<<toEuro<<endl<<"USD: " << toUSD;
}

