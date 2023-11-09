#include <iostream>
using namespace std;

void sort(int& num1, int& num2, int& num3) {
	int max = num1;
	int min = num1;
	int second = num1;

	if (max < num2) {
		max = num2;
	}
	if (max < num3) {
		max = num3;
	}

	if (min > num2) {
		min = num2;
	}
	if (min > num3) {
		min = num3;
	}

	if (max != num2 && min != num2) {
		second = num2;
	}
	if (max != num3 && min != num3) {
		second = num3;
	}

	num1 = min;
	num2 = second;
	num3 = max;
	return;
}

main() {
	int num1, num2, num3;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	sort(num1, num2, num3);
	cout << num1 << " " << num2 << " " << num3;
}