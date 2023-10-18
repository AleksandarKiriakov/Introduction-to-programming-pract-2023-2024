// Zad-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;
	int res = 2;
	
	if ( num >= 80 ) {
		res = 6;
	} else if ( num >= 70 ) {
		res = 5;
	} else if ( num >= 60 ) {
		res = 4;
	} else if ( num >= 40 ) {
		res = 3;
	}

	cout << "Grade: " << res;
}

