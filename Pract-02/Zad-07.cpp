// Zad-07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char character;

	cout << "Enter a character: ";
	cin >> character;

	if ( character >= 'a' && character <= 'z' ) {
		cout << (char)((int)character - 32);
	} else if ( character >= 'A' && character <= 'Z' ) {
		cout << (char)((int)character + 32);
	} else {
		cout << "Invalid character";
	}
}
