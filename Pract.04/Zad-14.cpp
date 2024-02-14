#include <iostream>
using namespace std;

unsigned sumOfDigits(int num) {
	unsigned res = 0;
	while (num != 0) {
		res += num % 10;
		num /= 10;
	}
	return res;
}

unsigned sumOfDigitsTillSumIsInteger(int num) {
	unsigned res = num;
	do {
		res = sumOfDigits(res);
	} while (res >= 10);
	return res;
}

main() {
	int num;
	cin >> num;
	cout << sumOfDigitsTillSumIsInteger(num);
}