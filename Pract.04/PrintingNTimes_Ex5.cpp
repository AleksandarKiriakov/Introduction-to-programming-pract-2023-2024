// PrintingNTimes_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print(char s, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << s << " ";
	}
}

int main()
{
	char s;
	cout << "Symbol: ";
	cin >> s;

	int n;
	cout << "Number: ";
	cin >> n;

	print(s, n);
}
