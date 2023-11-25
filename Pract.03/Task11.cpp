
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

	bool isPrime = false;

	for (int i = a; i <= b; i++)
	{
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
			}
			else
			{
				isPrime = true;
			}
		}

		if (isPrime)
		{
			cout << i << " ";
		}

	}
}

