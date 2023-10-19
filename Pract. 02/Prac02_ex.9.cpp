
#include <iostream>
using namespace std;

int main()
{
   //ex.9

	int num1;
	int num2;
	int num3;
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;
	int small, middle, big;
	if (num1 <= num2 && num1 <= num3)
	{
		small = num1;
		if (num2 <= num3)
		{
			middle = num2;
			big = num3;
		}
		else
		{
			middle = num3;
			big = num2;
		}
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		small = num2;
		if (num1 <= num3)
		{
			middle = num1;
			big = num3;
		}
		else
		{
			middle = num3;
			big = num2;
		}
	}
	else if (num3 <= num1 && num3 <= num2)
	{
		small = num3;
		if (num1 <= num2)
		{
			middle = num1;
			big = num2;
		}
		else
		{
			middle = num2;
			big = num1;
		}
	}
	cout << "Sorted numbers: " << small << "," << middle << "," << big;

}

