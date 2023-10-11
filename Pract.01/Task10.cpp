

#include <iostream>
using namespace std;

int main()
{
	cout << "a:";
	int a;
	cin >> a;
	cout << "b:";
	int b;
	cin >> b;
	int c = a;
	a = b;
	b = c;
	cout << "a=" << a << endl <<"b=" << b;

}
