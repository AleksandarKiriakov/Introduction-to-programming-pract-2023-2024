
#include <iostream>
using namespace std;

int main()
{
	int m;
	int n;
	cin >> m >> n;

	int product = m * n;

	int counter = 1;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1 ; j <= n; j++)
		{
			cout << counter;
			counter++;
		}
		cout << endl;
	}

}

