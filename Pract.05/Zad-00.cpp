#include <iostream>
using namespace std;

void printQuadrant(int x, int y) {
	if (x > 0) {
		if (y > 0) {
			cout << "It is in quadrant 1";
		}
		else if (y < 0) {
			cout << "It is in quadrant 4";
		}
		else {
			cout << "It is between quadrants 1 and 4";
		}
	}
	else if (x < 0) {
		if (y > 0) {
			cout << "It is in quadrant 2";
		}
		else if (y < 0) {
			cout << "It is in quadrant 3";
		}
		else {
			cout << "It is between quadrants 2 and 3";
		}
	}
	else {
		if (y > 0) {
			cout << "It is between quadrants 1 and 2";
		}
		else if (y < 0) {
			cout << "It is between quadrants 3 and 4";
		}
		else {
			cout << "It is at 0";
		}
	}
}

main() {
	int x, y;
	cin >> x;
	cin >> y;
	printQuadrant(x, y);
}