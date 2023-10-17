#include <iostream>
using namespace std;
int main() {

	cout << "Enter three numbers: ";
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	int min = num1;

	if (num2 < num1) {

		min = num2;

	}

	if (num3 < min) {

		min = num3;

	}

	int max = num1;
	
	if (num2 > num1) {

		max = num2;

	}

	if (num3 > max) {

		max = num3;

	}

	int midNum = num1 + num2 + num3 - max - min;

	cout << min << " " << midNum << " " << max;

}