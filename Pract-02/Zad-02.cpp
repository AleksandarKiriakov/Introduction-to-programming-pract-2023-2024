// Zad-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char character;
	cin >> character;

	if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
		switch (character) {
			case 'A':
			case 'I':
			case 'O':
			case 'E':
			case 'U':
			case 'Y':
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o': 
			case 'y': cout << "It's a vowel"; break;
			default: cout << "It's not a vowel"; break;
		}
	} else {
		cout << "The symbol is not an english one";
	}
}

