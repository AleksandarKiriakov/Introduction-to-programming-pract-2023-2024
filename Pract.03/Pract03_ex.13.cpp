
#include <iostream>
using namespace std;

int main()
{
    //ex.13
	unsigned int number;
	cout << "Enter a number: ";
	cin >> number;
	bool isFirst = true;
	int power = 0;
	while (number>0)
	{
        if (num % 2 == 1)
        {
            if (!isFirst) 
            {
                cout << " + ";
            }
            if (power == 0) 
            {
                cout << "2^0";
            }
            else 
            {
                cout << "2^" << power;
            }
            isFirst = false;
        }
        number = number / 2;
        power++;
	}
    if (isFirst) 
    {
        cout << "0";
    }

    cout << endl;
}

