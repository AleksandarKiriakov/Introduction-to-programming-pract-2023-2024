#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

int main() {
	int num1, num2;
	cout << "enter the first number: ";
	cin >> num1;
	cout << "enter the second number: ";
	cin >> num2;
	cout << sum(num1, num2);
}