
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n > 3)
	{
		int a = 1;
		int b = 1;
		int c = 2;
		cout << a << " " << b << " " << c << " ";

		while(c + b < n)
		{
			a = b;
			b = c;
			c = a + b;
			cout << c << " ";
		}

	}
}

