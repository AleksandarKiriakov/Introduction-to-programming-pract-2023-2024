#include <iostream>
using namespace std;

void absoluteValue(int& num) {
	if (num < 0) {
		num *= -1;
	}
}

main() {
	int num;
	cin >> num;
	absoluteValue(num);
	cout << num;
}