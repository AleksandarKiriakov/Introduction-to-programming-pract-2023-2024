#include <iostream>
using namespace std;

int abs(int num) {
	return (num < 0 ? num * (-1) : num);
}

double fabs(double num) {
	return (num < 0 ? num * (-1) : num);
}

main() {
	int num1;
	cout << "Enter an int number: ";
	cin >> num1;
	double num2;
	cout << "Enter a double number: ";
	cin >> num2;
	cout << "abs of '" << num1 << "': " << abs(num1) << endl
		<< "fabs of '" << num2 << "': " << fabs(num2);
}