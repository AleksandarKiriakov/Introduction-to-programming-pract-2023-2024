#include <iostream>
using namespace std; 

int main() 
{ 
	//ex.10
	unsigned number; 
	cin >> number; 
	int digitsCount = 0; 
	unsigned numberCopy = number; 
	while (numberCopy != 0) 
	{ 
		digitsCount++; numberCopy /= 10; 
	} 
	unsigned changedNumber = 0; 
	unsigned searchedindex = digitsCount / 2 + 1; 
	unsigned multiplier = 1; 
	for (int i = digitsCount; i > 0; i--) 
	{
		if (i == searchedindex) 
		{ 
			number /= 10; 
			if(digitsCount % 2 == 0) 
			{
				i--;
				number /= 10; 
			}
		} 
		else 
		{ 
			int currentDigit = number % 10;
			changedNumber += currentDigit * multiplier;
			number /= 10; multiplier *= 10; 
		} 
	} 
	cout << changedNumber << ", " << changedNumber + 1; 
}