
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b >> c;

	if ((a < b + c) && (b < a + c) && (c < b + a))
	{
		cout << "true";
	}
	else  
	{
		cout << "false";
	}
}


