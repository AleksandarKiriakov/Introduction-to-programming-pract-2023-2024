#include <iostream>
using namespace std;

int pow(int num, unsigned power) {
	int result = num;
	for (int i = 0; i < power; i++) {
		result *= num;
	}
	return result;
}

void printInBinary(int num) {
	int counter = 0;
	int currentNum = 1;
	int highestNum = 1;
	while (highestNum <= num) {
		counter++;
		currentNum = highestNum;
		highestNum = pow(2, counter);
	}
	while (num > 0) {
		int binaryNum = 0;
		binaryNum = (num - currentNum) >= 0;
		num -= currentNum * binaryNum;
		cout << binaryNum;
		currentNum /= 2;
	}
	return;
}

main() {
	int num;
	cin >> num;
	printInBinary(num);
}