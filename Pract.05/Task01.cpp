#include <iostream>
using namespace std;

void num(long long& num, int& power) {

	int numCopy = num;

	for (int i = 1; i < power; i++) {

		num *= numCopy;

	}

}

int main() {

	long long number;
	cin >> number;

	int pow;
	cin >> pow;

	num(number, pow);
	cout << number;

	return 0;
}