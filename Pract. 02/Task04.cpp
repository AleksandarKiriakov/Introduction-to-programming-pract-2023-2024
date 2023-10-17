#include <iostream>
using namespace std;
int main() {

	cout << "Enter percentage: ";

	int num;
	cin >> num;

	char ch;
	cin >> ch;

	

	if (num >= 90 && num <=100) {


		cout << "6+";

	}
	else if (num >= 80 && num < 90) {

		cout << "6";

	}
	else if (num >= 70 && num < 80) {

		cout << "5";

	}
	else if (num >= 60 && num < 70) {

		cout << "4";

	}
	else if (num >= 40 && num < 60) {


		cout << "3";

	}
	else if (num < 40 && num >= 0) {

		cout << "2";

	}
	else {

		cout << "Invalid percentage given";

	}
}