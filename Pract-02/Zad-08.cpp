// Zad-08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int arabicNum;
	cout << "Arabic numeral: ";
	cin >> arabicNum;

	switch (arabicNum) {
		case 9: cout << "IX"; break;
		case 8: cout << "VIII"; break;
		case 7: cout << "VII"; break;
		case 6: cout << "VI"; break;
		case 5: cout << "V"; break;
		case 4: cout << "IV"; break;
		case 3: cout << "III"; break;
		case 2: cout << "II"; break;
		case 1: cout << "I"; break;
	}
}
