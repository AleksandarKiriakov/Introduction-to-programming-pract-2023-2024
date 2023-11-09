#include <iostream>
using namespace std;

int countDigits(int num) {
	int digitCount = 0;
	while (num != 0) {
		digitCount++;
		num /= 10;
	}
	return digitCount;
}

void reverseNum(int& num) {
	int digitCount = countDigits(num);
	int res = 0;
	for (int i = 0; i < digitCount; i++) {
		res = res * 10 + num % 10;
		num /= 10;
	}
	num = res;
	return;
}

main() {
	int num;
	cin >> num;
	reverseNum(num);
	cout << "reversed: " << num;
}