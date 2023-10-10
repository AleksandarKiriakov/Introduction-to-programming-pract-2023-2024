#include <iostream>
using namespace std;

int main() {
	cout << "Enter three different random numbers: " << endl;
	int first;
	cin >> first;

	int second;
	cin >> second;

	int third;
	cin >> third;

	bool isSecondGreaterThanFirst = second > first;
	bool isThirdGreaterThanSecond = third > second;
	bool isAscending = isSecondGreaterThanFirst && isThirdGreaterThanSecond;

	cout << isAscending << endl;
	return 0;
}