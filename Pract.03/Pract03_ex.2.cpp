
#include <iostream>
using namespace std;

int main()
{
	//ex.2

	unsigned int n;
	cout << "Enter a number: ";
	cin >> n;
	for (int i=1; i < n; i++)
	{
		int y;
		y = n - i;
		cout << "x=" << i << "y=" << y << endl;
	}


}
