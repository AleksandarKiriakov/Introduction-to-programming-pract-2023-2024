
#include <iostream>
using namespace std;

int main()
{
	//ex.6
    int number;
    cout << "Enter a number: ";
    cin >> number;
	int x = 0;
	bool havingNumber = false;
	for (int i = 1; i < number; i++)
	{
		int a;
		cin >> a;
		x += a;
		if (i<number-1)
		{
			x *= 10;
		}


	}
	for (int i = 1; i <= number; i++)
	{
		havingNumber = false;
		int z = x;
		while (z > 0)
		{
			int firstnum = z % 10;
			if (firstnum ==i)
			{
				havingNumber = true;
			}
			z = z / 10;
		}
		if (!havingNumber)
		{
			cout << i;
			break;
		}

	}
	
	
	


	

}

