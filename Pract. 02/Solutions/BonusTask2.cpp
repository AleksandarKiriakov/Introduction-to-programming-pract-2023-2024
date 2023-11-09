// BonusTask2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int tomatoes, peppers, carrots, olives, potatoes, flavoringAgents;
    bool isFriendCommingToHelp;
    cout << "Enter number of tomatoes: ";
    cin >> tomatoes;
    cout << "Enter number of peppers: ";
    cin >> peppers;
    cout << "Enter number of carrots: ";
    cin >> carrots;
    cout << "Enter number of olives: ";
    cin >> olives;
    cout << "Enter number of potatoes: ";
    cin >> potatoes;
    cout << "Enter ml of  flavoring agents: ";
    cin >> flavoringAgents;
    cout << "Enter 1 if a friend comming to help and 0 if Traicho will cook alone:  : ";
    cin >> isFriendCommingToHelp;

    bool isCookingASalad = tomatoes >= 1 
        && peppers >= 2 
        && carrots >= 4 
        && olives >= 3 
        && potatoes >= 3 
        && flavoringAgents >= 150;
    bool isCookingASoap = tomatoes >= 2 
        && peppers >= 3 
        && carrots >= 5 
        && olives >= 6 
        && potatoes >= 10 
        && flavoringAgents >= 200 
        && isFriendCommingToHelp;
    bool isCookingACasserole = tomatoes >= 5 
        && peppers >= 6 
        && carrots >= 12 
        && olives >= 7 
        && potatoes >= 12 
        && flavoringAgents >= 300 
        && isFriendCommingToHelp;

    if (isCookingACasserole) {
        cout << "Traicho will eat casserole tonight!";
    }
    else if (isCookingASoap) {
        cout << "Traicho will eat soap tonight!";
    }
    else if (isCookingASalad) {
        cout << "Traicho will eat salad tonight!";
    }
    else {
        cout << "Traicho is too broke and won't have dinner tonight!";
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
