#include <iostream>
using namespace std;

bool isLetter(char character) {
	return character >= 'a' && character <= 'z'
		|| character >= 'A' && character <= 'Z';
}

int abs(int num) {
	return (num > 0 ? num : -num);
}

char lowerCase(char character) {
	if (character >= 'A' && character <= 'Z') {
		character = (char)((int)character - abs((int)'A' - (int)'a'));
	}
	return character;
}

void sortASCII(char& character1, char& character2) {
	if (isLetter(character1) && isLetter(character2)) {
		if (lowerCase(character1) < lowerCase(character2)) {
			char temp = character1;
			character1 = character2;
			character2 = temp;
		}
		else {
			cout << (int)character1 << endl
				<< (int)character2 << endl;
		}
	}
	else {
		cout << (int)character1 << endl
			<< (int)character2 << endl;
	}
}

main() {
	char character1, character2;
	cin >> character1;
	cin >> character2;
	sortASCII(character1, character2);
	cout << character1 << " " << character2;
}