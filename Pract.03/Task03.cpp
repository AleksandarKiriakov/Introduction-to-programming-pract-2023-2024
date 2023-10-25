

#include <iostream>
using namespace std;

int main()
{
	int n;
	do
	{
		cout << "Enter n: ";
		cin >> n;

	} while (n == 0);

	int powNumber = n * n;
	int reversedNumber = 0;

	while (powNumber != 0)
	{
		reversedNumber *= 10; 
		reversedNumber += powNumber % 10; 
		powNumber /= 10;
	}
	cout << reversedNumber;
}



