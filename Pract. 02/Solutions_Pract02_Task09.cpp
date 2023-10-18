#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << "Enter the third number: ";
	cin >> c;
	if ((a <= b) && (b <= c) && (a <= c))
	{
		cout << "The numbers in ascending order are: " << endl << a << endl << b << endl << c;
	}
	else if ((a <= b) && (b >= c) && (a <= c))
	{
		cout << "The numbers in ascending order are: " << endl << a << endl << c << endl << b;
	}
	else if ((b <= a) && (a <= c) && (b <= c))
	{
		cout << "The numbers in ascending order are: " << endl << b << endl << a << endl << c;
	}
	else if ((b <= a) && (a >= c) && (b <= c))
	{
		cout << "The numbers in ascending order are: " << endl << b << endl << c << endl << a;
	}
	else if ((c <= b) && (b <= a) && (c <= a))
	{
		cout << "The numbers in ascending order are: " << endl << c << endl << b << endl << a;
	}
	else
	{
		cout << "The numbers in ascending order are: " << endl << c << endl << a << endl << b;
	}
}


