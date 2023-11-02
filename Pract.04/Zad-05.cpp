#include <iostream>
using namespace std;

void print(char s, int n) {
	for (int i = 0; i < n; i++) {
		cout << s << endl;
	}
}

main() {
	char repeatableChar;
	cout << "Enter a char: ";
	cin >> repeatableChar;
	int num;
	cout << "Enter a number the char will be repeated: ";
	cin >> num;
	print(repeatableChar, num);
}