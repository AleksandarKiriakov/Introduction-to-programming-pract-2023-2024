﻿// BonusTask1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{   
    int price, numberUsbPorts, ram;
    bool isContainsSsd;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter number of USB ports: ";
    cin >> numberUsbPorts;
    cout << "Enter RAM: ";
    cin >> ram;
    cout << "Enter 0 if the laptop doesn't have a SSD and 1 if it have one: ";
    cin >> isContainsSsd;

    bool isTishkoBuyingTheExpensiveLaptop = (price >= 1000 && price <= 1500) && numberUsbPorts >= 3 && ram >= 8 && isContainsSsd;
    bool isTishkoBuyingTheCheaperLaptop = (price <= 800) && ((ram < 8) || !isContainsSsd);
    bool isTishkoBuying = isTishkoBuyingTheCheaperLaptop || isTishkoBuyingTheExpensiveLaptop;

    if (isTishkoBuying) {
        cout << "Tishko is buying";
    }
    else {
        cout << "Tishko is not buying";
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
