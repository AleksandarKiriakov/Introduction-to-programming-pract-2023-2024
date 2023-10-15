
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int t;
	cin >> a >> b >> c;

	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	cout << a*100 + b*10 +c;
}


