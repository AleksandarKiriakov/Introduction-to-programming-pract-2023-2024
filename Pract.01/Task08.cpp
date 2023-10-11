#include <iostream>
using namespace std;
int main() {

	double r = 0;
	cout << "Radius is: ";
	cin >> r;

	double pi = 3.14159265;

	double length = r * 2 * pi;

	double area = pi * r * r;

	cout << "Length is: " << length << endl;
	cout << "Area is: " << area;

}
