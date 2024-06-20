#include <iostream>
using namespace std;

bool isPrimary(int num) {
	int sqrtOfNum = sqrt(num);
	for (int i = 2; i <= sqrtOfNum; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

void printAllPrimariesTill(int num) {
	cout << "All primary numbers till '" << num << "': " << endl;
	for (int i = 2; i < num; i++) {
		if (isPrimary(i)) cout << i << " ";
	}
	cout << endl;
	return;
}

bool isSumOfPrimaries(int num) {
	int addend1 = 1;
	while (addend1 < num - 1) {
		addend1++;
		if (!isPrimary(addend1)) continue;

		int addend2 = num - addend1;
		if (!isPrimary(addend2)) continue;

		cout << "It is a sum of '" << addend1 << "' and '" << addend2 << "'" << endl;
		return true;
	}
	return false;
}

main() {
	int num;
	cout << "Enter number: ";
	cin >> num;
	cout << (isPrimary(num) ? "It is a primary number" : "It is not a primary number") << endl;
	printAllPrimariesTill(num);
	cout << (isSumOfPrimaries(num) ? "It is a sum of primaries" : "It is not a sum of primaries");
}