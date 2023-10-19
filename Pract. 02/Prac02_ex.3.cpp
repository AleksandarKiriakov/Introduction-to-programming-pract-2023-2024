
#include <iostream>
using namespace std;

int main()
{
   
	//ex.3

	int a;
	int b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	double result = ( a > b ) ? a : b;
	cout << "Bigger number is: " << result;


}
