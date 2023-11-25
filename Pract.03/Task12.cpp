#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	 
	int testingNumber = 2;
	bool isPowerOfTwo = true;

	while (testingNumber<=num)
	{
		if (testingNumber == num || num == 1)
		{
			isPowerOfTwo = true;
		}
		else
		{
			isPowerOfTwo = false;
		}
		testingNumber *= 2;
	}
	cout << boolalpha << isPowerOfTwo;
}
