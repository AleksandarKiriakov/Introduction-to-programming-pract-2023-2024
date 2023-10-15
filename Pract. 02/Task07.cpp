
#include <iostream>
using namespace std;

int main()
{
	char symbol;
	cin >> symbol;
	char d;


	if (symbol >= 'a' && symbol <= 'z')
	{
		d = symbol - 32;
		cout << d;
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		d = symbol + 32;
		cout << d;
	}
	else
	{
		cout << "Invalid symbol!";
	}
}

