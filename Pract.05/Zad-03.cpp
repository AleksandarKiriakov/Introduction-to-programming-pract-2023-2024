#include <iostream>
using namespace std;

bool isPrimary(int num) {
	int sqrtOfNum = sqrt(num);
	for (int i = 2; i <= sqrtOfNum; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

void nextPrimary(int& num) {
	for (int i = num + 1; i > num; i++) {
		if (isPrimary(i)) {
			num = i;
			return;
		}
	}
}

main() {
	int num;
	cin >> num;
	nextPrimary(num);
	cout << num;
}