#include <iostream>
using namespace std;

void pow(int& num, int& power) {
	int res = num;
	for (int i = 1; i < power; i++) {
		res *= num;
	}
	num = res;
	return;
}

main() {
	int num, power;
	cin >> num;
	cin >> power;
	pow(num, power);
	cout << num;
}