
#include <iostream>
using namespace std;

int main()
{
	//ex.14
	int a, b, c, d, e;
	cout << "Enter five numbers: ";
	cin >> a >> b >> c >> d >> e;
	for (int x = -100; x <= 100; x++)
	{
		int result = a * x * x * x * x + b * x * x * x + c * x * x + d * x + e;
		if (result >= 0)
		{
			cout << "x= " << x << endl;
		}
	}
}

