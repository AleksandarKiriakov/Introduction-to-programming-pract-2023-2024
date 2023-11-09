#include <iostream>
using namespace std;

void f(int& num1, int& num2, int& num3) {
	num2 -= num1;
	num1 *= 2;
	num3 += 10;
	return;
}

main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	f(num1, num2, num3);
	cout << num1 << endl
		<< num2 << endl
		<< num3;
}