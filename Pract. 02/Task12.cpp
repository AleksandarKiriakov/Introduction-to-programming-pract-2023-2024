#include <iostream>
using namespace std;
int main() {

	int day, month;
	cin >> day >> month;
	bool isValid = true;



	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

		if (day <= 30 && day > 1) {

			day = day + 1;
}
		else if (day == 31 && day > 1) {

			day = 1;
			month = month + 1;

		}
		else { isValid = false; }

	}
	else if (month == 3 || month == 4 || month == 6 || month == 9 || month == 11) {

		if (day <= 30 && day > 1) {

			day = day + 1;
		}
		else if (day == 31 && day > 1) {

			day = 1;
			month = month + 1;

		}
		else { isValid = false; }

	}
	else if (month == 2) {

		if (day <= 27 && day > 1) {

			day = day + 1;
		}
		else if (day == 28 && day > 1) {

			day = 1;
			month = month + 1;

		}
		else { isValid = false; }

	}
	
	
	if (isValid) {


		cout << day << " " << month;

	}
	else {

		cout << "Invalid";

	}

}