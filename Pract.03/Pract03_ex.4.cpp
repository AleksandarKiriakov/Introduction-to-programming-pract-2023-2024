
#include <iostream>
using namespace std;

int main()
{
	//ex.4
	unsigned int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	unsigned int result = num1 * num2;
	int x = 1;
	for (int i = 1; i <=result; i++)
	{
		if (x==num2)
		{
			x = 1;
			cout << i << endl;
		}
		else
		{
			x++;
			cout << i;
		}
		

	}
}
