#include <iostream>
using namespace std;

int main()
{
    //ex.11
	int a;
	cout << "Enter the first number: ";
	cin >> a;
	int b;
	cout << "Enter the second number: ";
	cin >> b;
    for (int num = a; num <= b; num++) 
    {
        if (num <= 1)
            continue;
        bool is_prime = true;
        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime) 
        {
            cout << num << " ";
        }
    }
    cout << endl;


}