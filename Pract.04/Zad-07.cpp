#include <iostream>
using namespace std;

bool isBetween(int num, int leftBoundary, int rightBoundary) {
	return num >= leftBoundary && num <= rightBoundary;
}

int askUser(int from, int to) {
	int num = 0;
	do {
		cout << "Enter a number in the interval [" << from << ", " << to << "]: ";
		cin >> num;
	} while (num <= from || num >= to);
	return num;
}

main() {
	int from, to;
	cout << "Enter value for left boundary: ";
	cin >> from;
	cout << "Enter value for right boundary: ";
	cin >> to;
	int num = askUser(from, to);
	cout << (isBetween(num, from, to)
		? "The number is in the interval"
		: "The number is not in the interval");
}