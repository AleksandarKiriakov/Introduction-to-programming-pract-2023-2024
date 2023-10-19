
#include <iostream>
using namespace std;

int main()
{
   
	//ex.2

	char symbol;
	cout << "Enter a character: ";
	cin >> symbol;
	bool LatinLetter = (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');

	if (LatinLetter)
	{
		switch (symbol)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << symbol << " is a vowel." << endl; break;
		default:
			cout << symbol << " is a consonant."; break;


		}
	
	} 
	else 
	{
		cout << "The character is not a letter of the Latin alphabet." << endl;
	}

}
