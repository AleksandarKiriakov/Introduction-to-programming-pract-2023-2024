#include <iostream>
using namespace std;

int main() {
	cout << "Enter two numbers: " << endl;
	int first;
	cout << "Dividend: ";
	cin >> first;

	cout << "Divisor: ";
	int second;
	cin >> second;

	cout << "The quotient of the division is: " << first / second << endl;
	cout << "The remainder of the division is: " << first % second << endl;
	return 0;
}