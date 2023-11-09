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

int reverse(int num) {
	int res = 0;
	int digitCount = countDigits(num);
	for (int i = 0; i < digitCount; i++) {
		res = res * 10 + num % 10;
		num /= 10;
	}
	return res;
}

int digitAt(int num, int pos) {
	num = reverse(num);
	int res = 0;
	for (int i = 0; i < pos; i++) {
		res = num % 10;
		num /= 10;
	}
	return res;
}

int lastDigit(int num) {
	return (num < 9 ? num : num % 10);
}

void function(unsigned& num1, unsigned num2) {
	if (num2 > 10) {
		cout << "The second number must be one-digit number!!!";
		return;
	}
	int digitCount = countDigits(num1);
	int res = 0;
	for (int i = 1; i <= digitCount; i++) {
		int currentDigit = digitAt(num1, i);
		res = res * 10 + lastDigit(currentDigit + num2);
	}
	num1 = res;
}

main() {
	unsigned num1, num2;
	cin >> num1;
	cin >> num2;
	function(num1, num2);
	cout << num1;
}