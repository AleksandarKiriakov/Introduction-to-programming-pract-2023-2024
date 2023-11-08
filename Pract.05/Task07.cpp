#include <iostream>
using namespace std;

int reversedNewNum(int num) {

	int newNum = 0;

	while (num > 0) {

		int lastDigit = num % 10;
		
		newNum = newNum * 10 + lastDigit;
		num /= 10;

	 }

	return newNum;
}

int modifiedNum(int num1, int num2) {

	int sumOfNumbers = 0;
	int newNum = 0;

	while (num1 > 0) {

		int lastDigit = num1 % 10;
		sumOfNumbers = lastDigit + num2;

		if (sumOfNumbers > 10) {

			sumOfNumbers = sumOfNumbers % 10;

		}
		else if (sumOfNumbers == 10) {

			sumOfNumbers = 0;

		}

		newNum = newNum * 10 + sumOfNumbers;
		num1 /= 10;

	}

	return reversedNewNum(newNum);
}


int main() {

	int num1;
	cin >> num1;

	int num2;
	cin >> num2;

	cout << modifiedNum (num1, num2);

	return 0;
}