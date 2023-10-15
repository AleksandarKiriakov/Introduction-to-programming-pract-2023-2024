
#include <iostream>
using namespace std;


int main()
{
	int num;      
	cin >> num;
	
	int firstDigit = num / 1000;
	int secondDigit = ( num / 100) % 10;
	int thirdDigit  = ( num/ 10) % 10;
	int fourthDigit = num % 10;

	int num1 = firstDigit * 10 + fourthDigit;
	int num2 = secondDigit * 10 + thirdDigit;

	if (num1 < num2)
	{
		cout << "less " << '(' << num1 << '<' << num2 << ')';
	}
	else if (num1 == num2)
	{
		cout << "equal " << '(' << num1 << '=' << num2 << ')';
	}
	else 
	{
		cout << "greater " << '(' << num1 << '>' << num2 << ')';
	}



}


