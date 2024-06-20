#include <iostream>
using namespace std;

int pow(int num, unsigned power) {
	int result = num;
	for (int i = 0; i < power; i++) {
		result *= num;
	}
	return result;
}

main() {
	int num, power;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter its power: ";
	cin >> power;
	cout << pow(num, power);
}