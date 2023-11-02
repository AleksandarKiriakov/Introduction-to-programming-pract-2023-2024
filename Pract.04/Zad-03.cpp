#include <iostream>
using namespace std;

bool isPositive(int num) {
	return num > 0;
}

bool isNegative(int num) {
	return num < 0;
}

main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Is it positive? " << isPositive(num) << endl
		<< "Is it negative? " << isNegative(num);
}