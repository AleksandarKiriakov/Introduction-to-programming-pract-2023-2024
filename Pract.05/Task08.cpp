#include <iostream>
using namespace std;

int Abs(int& num) {

	if (num < 0) 
		num *= -1;

	return num;
}

int main() {

	int number;
	cin >> number;

	cout << Abs(number);

	return 0;
}