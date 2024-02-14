#include <iostream>
using namespace std;

int pow(int num, unsigned power) {
	int result = num;
	for (int i = 0; i < power; i++) {
		result *= num;
	}
	return result;
}

unsigned absoluteValueOf(int num) {
	return num > 0 ? num : -num;
}

unsigned closiestPowerOfTo(unsigned closiestNum, unsigned closiestTo) {
	unsigned power = 0;
	unsigned closiestNumOnPower = 1;
	unsigned res;
	do {
		res = power;
		power++;
		closiestNumOnPower = (unsigned)pow(closiestNum, power);
	} while (closiestTo > closiestNumOnPower);
	return res;
}

main() {
	int num;
	do {
		cout << "Enter a number in the interval [100, 100000]: ";
		cin >> num;
	} while (num >= 100 && num <= 100000);
	cout << closiestPowerOfTo(2, absoluteValueOf(num));
}