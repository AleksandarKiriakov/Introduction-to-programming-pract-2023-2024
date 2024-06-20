// Zad-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;
	if ( year % 4 == 0 && year % 100 != 0 ) {
		cout << "The year is a leap one";
	} else if ( !( year % 400 ) ) {
		cout << "The year is a leap one";
	} else {
		cout << "The year is not a leap one";
	}
}

