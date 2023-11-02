#include <iostream>
using namespace std;

bool checkSymbol(char character) {
	if (character >= 'a' && character <= 'z'
		|| character >= 'A' && character <= 'Z') {
		return true;
	}
	return false;
}

bool isCapitalLetter(char character) {
	if (character >= 'A' && character <= 'Z') {
		return true;
	}
	return false;
}

main() {
	char character;
	cout << "Enter a character: ";
	cin >> character;
	cout << (checkSymbol(character)
		? (isCapitalLetter(character) ? "The entered character is uppercase letter"
			: "The entered character is lower case letter")
		: "The entered character is not a letter");
}