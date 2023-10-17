#include <iostream>
using namespace std;
int main() {

	cout << "First side: ";
	int firstSide;
	cin >> firstSide;

	cout << "Second side: ";
	int secondSide;
	cin >> secondSide;

	cout << "Third side: ";
	int thirdSide;
	cin >> thirdSide;

	bool isValid;

	isValid = (firstSide + secondSide > thirdSide && firstSide + thirdSide > secondSide && secondSide + thirdSide > firstSide);

	if (isValid) {

		cout << "Valid triangle";

	}
	else {

		cout << "Invalid triangle";

	}
}