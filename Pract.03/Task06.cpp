
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

	int enteredNumber;
	int sumOfEnteredNumbers = 0;

	for (int i = 1; i < n; i++)
	{
		cin >> enteredNumber;
		sumOfEnteredNumbers += enteredNumber;
	}

	int expectedSum = ((2 + (n - 1)) *n ) /2;
	
	cout << expectedSum - sumOfEnteredNumbers;
}
