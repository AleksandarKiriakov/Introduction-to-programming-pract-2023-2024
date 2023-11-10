#include <iostream>
using namespace std;

int reversedNum(int& num) {

	int reversednum = 0;

	while (num > 0) {


		int lastDigit = num % 10;
		reversednum = reversednum * 10 + lastDigit;
		num /= 10;


	}

	return reversednum;
}

int main() {

	int number;
	cin >> number;

	cout << reversedNum(number);

	return 0;
}