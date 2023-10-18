#include <iostream>
using namespace std;

int main()
{
	char symbol;
	cout << "Enter capital or small letter: ";
	cin >> symbol;
	if (symbol >= 'a' && symbol <= 'z')
	{
		symbol -= 32;
		cout << "Capital letter is: " << symbol;
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		symbol += 32;
		cout << "The small letter is: " << symbol;
	}
	else
	{
		cout << "Invalid character.";
	}
}

