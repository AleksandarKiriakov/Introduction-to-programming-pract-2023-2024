
#include <iostream>
using namespace std;

int main()
{
   //ex.12

	int day;
	int month;
	cout << "Enter the day: ";
	cin >> day;
	cout << "Enter the month: ";
	cin >> month;
	int daysInMonth;
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		daysInMonth = 31; break;
	case 4: case 6: case 9: case 11:
		daysInMonth = 30; break;
	case 2: daysInMonth = 28; break;
	default: cout << "Invalid month! Enter a valid month(1 - 12).";
	}
	if (day < daysInMonth)
	{
		day++;
	}
	else
	{
		day = 1;
		if (month == 12)
		{
			month = 1;
		}
		else
		{
			month++;
		}
	}
	cout << "The next day is: " << day << "/" << month;
}

