#include <iostream>
using namespace std;

unsigned findMinPrimary(int num) {
	unsigned sqrtOfNum = sqrt(num);
	for (int i = 2; i <= sqrtOfNum; i++) {
		if (num % i == 0) return i;
	}

	return num;
}

void printFactorization(int num) {
	while (num != 1) {
		unsigned minPrimary = findMinPrimary(num);
		cout << minPrimary << ".";
		num /= minPrimary;
	}
}

main() {
	int num;
	cin >> num;
	printFactorization(num);
}