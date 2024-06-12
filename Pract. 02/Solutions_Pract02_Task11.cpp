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
	if ((a >= b) && (b >= c) && (a >= c))
	{
		cout << "The largest possible number is: " << a << b << c;
	}
	else if ((a >= b) && (b <= c) && (a >= c))
	{
		cout << "The largest possible number is: " << a << c << b;
	}
	else if ((b >= a) && (a >= c) && (b >= c))
	{
		cout << "The largest possible number is: " << b << a << c;
	}
	else if ((b >= a) && (a <= c) && (b >= c))
	{
		cout << "The largest possible number is: " << b << c << a;
	}
	else if ((c >= b) && (b >= a) && (c >= a))
	{
		cout << "The largest possible number is: " << c << b << a;
	}
	else
	{
		cout << "The largest possible number is: " << c << a << b;
	}
}

