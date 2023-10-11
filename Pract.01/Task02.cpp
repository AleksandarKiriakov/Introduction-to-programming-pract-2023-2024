#include <iostream>
using namespace std;
int main() {

	cout << "First side: ";
	double x;
	cin >> x;

	cout << "Second side: ";
	double y;
	cin >> y;

	double perimeter = (x + y) * 2;

	double area = x * y;


	cout << "Perimeter is: " << perimeter << endl;
	cout << "Area is: " << area << endl;

}
