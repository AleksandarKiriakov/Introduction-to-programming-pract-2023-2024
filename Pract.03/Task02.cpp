

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

	for (int x = 1; x < n; x++)
	{
		int y = n - x;
		cout << "x=" << x << "  "  << "y=" << y <<endl;
	}
}

