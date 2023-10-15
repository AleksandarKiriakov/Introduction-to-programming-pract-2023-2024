
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b >> c;

	double x1 , x2 , d;
	d = b * b - 4 * a * c;
	
	if(d>0)
	{ 
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		cout << "x1= "<<x1 << endl << "x2= "<< x2;
	}
	else
	{
		cout << "false";
	}
	

}

