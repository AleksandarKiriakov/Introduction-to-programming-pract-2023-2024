// Zad-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
		int day, month;
	cout << "Enter day: ";
	cin >> day;
	cout << "Esnter month: ";
	cin >> month;

	int monthsToDaysPlusDays = day;

	switch (month) {
		case 2: monthsToDaysPlusDays += 31;  break;
		case 3: monthsToDaysPlusDays += 59;  break;
		case 4: monthsToDaysPlusDays += 90;  break;
		case 5: monthsToDaysPlusDays += 120;  break;
		case 6: monthsToDaysPlusDays += 151;  break;
		case 7: monthsToDaysPlusDays += 181;  break;
		case 8: monthsToDaysPlusDays += 212;  break;
		case 9: monthsToDaysPlusDays += 243;  break;
		case 10: monthsToDaysPlusDays += 273;  break;
		case 11: monthsToDaysPlusDays += 304;  break;
		case 12: monthsToDaysPlusDays += 334;  break;
	}

	if (monthsToDaysPlusDays > 365) {
		monthsToDaysPlusDays -= 365;
	}

	int newDay;
	int newMonth;

	int increasedDate = monthsToDaysPlusDays + 1;

	if (increasedDate > 334) {
		newMonth = 12;
		newDay = increasedDate - 334;
	} else if (increasedDate > 304) {
		newMonth = 11;
		newDay = increasedDate - 304;
	} else if (increasedDate > 273) {
		newMonth = 10;
		newDay = increasedDate - 273;
	} else if (increasedDate > 243) {
		newMonth = 9;
		newDay = increasedDate - 243;
	} else if (increasedDate > 212) {
		newMonth = 8;
		newDay = increasedDate - 212;
	} else if (increasedDate > 181) {
		newMonth = 7;
		newDay = increasedDate - 181;
	} else if (increasedDate > 151) {
		newMonth = 6;
		newDay = increasedDate - 151;
	} else if (increasedDate > 120) {
		newMonth = 5;
		newDay = increasedDate - 120;
	} else if (increasedDate > 90) {
		newMonth = 4;
		newDay = increasedDate - 90;
	} else if (increasedDate > 59) {
		newMonth = 3;
		newDay = increasedDate - 59;
	} else if (increasedDate > 31) {
		newMonth = 2;
		newDay = increasedDate - 31;
	} else {
		newMonth = 1;
		newDay = increasedDate;
	}

	cout << "Next date: " << newDay << " " << newMonth;
}
