#include <iostream>
using namespace std;

void numbers(int& num1, int& num2, int& num3) {

	int num1Copy = num1;
	num1 *= num1;
	num2 -= num1Copy;
	num3 += 10;

}

int main () {

	int a;
	cin >> a;

    int b;
	cin >> b;

    int c;
	cin >> c;

	numbers(a, b, c);

	cout << a << " " << b << " " << c;

}