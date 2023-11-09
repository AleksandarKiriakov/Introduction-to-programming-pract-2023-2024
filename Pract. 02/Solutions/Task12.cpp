// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int day, month;
    cout << "Enter a day: ";
    cin >> day;
    cout << "Enter a month: ";
    cin >> month;
    bool isItHas31days = (month > 6 && month % 2 == 0) || (month < 6 && month % 2 != 0);
    if (!(day == 30 || day == 31 || (day == 28 && month == 2))) {
        cout << "Next date: " << ++day << " " << month;
    }
    else if ((day == 30 && !isItHas31days) || (day == 31 && isItHas31days)) {
        if (month == 12) {
            cout << "Next date: 1 1";
        }
        else {
            cout << "Next date: 1 " << ++month;
        }
    }
    else if(day == 28 && month == 2) {
        cout << "Next date: 1 3";
    }
    else{
        cout << "Incorrect day or month";
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
