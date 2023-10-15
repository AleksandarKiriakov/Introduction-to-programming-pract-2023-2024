
#include <iostream>
using namespace std;

int main()
{
	cout << "Date: ";
	int day = 0;
	int month = 0;
	cin >> day >> month;

	if ((day >= 1 && day <= 31) && (month >= 1 && month <= 12))
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if (day < 31)
			{
				cout << "Next date: " << ++day << " " << month;
			}
			else
			{
				cout << "Next date: " << "1 " << ++month;
			}
			break;

		case 12:
			if (day < 31)
			{
				cout << "Next date: " << ++day << " " << month;
			}
			else
			{
				cout << "Next date: " << "1 " << 1;
			}
			break;

		case 2:
			if (day < 28)
			{
				cout << "Next date: " << ++day << " " << month;
			}
			else
			{
				cout << "Next date: " << "1 " << ++month;
			}
			break;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			if (day < 30)
			{
				cout <<"Next date: " << ++day << " " << month;
			}
			else
			{
				cout << "Next date: " << "1 " << ++month;
			}
			break;
		default:
			break;
		}
	}
}
