#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int b;
	cin>>b;
	int min = a < b ? a : b;
	int max = a < b ? b : a;
    cout << "min=" << min << endl;
	cout << "max=" << max << endl;

}

