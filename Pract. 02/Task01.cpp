#include <iostream>
using namespace std;
int main() {

	cout << "Year: ";
	int year;
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

		cout << "The year is leap";

	}
	else {
		cout << "The year is not leap";
	}

}