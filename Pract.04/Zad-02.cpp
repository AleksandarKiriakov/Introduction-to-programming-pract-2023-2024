#include <iostream>
using namespace std;

bool isEven(int num) {
	return num % 2 == 0;
}

main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << (isEven(num) ? "The number is even" : "The number is odd");
}