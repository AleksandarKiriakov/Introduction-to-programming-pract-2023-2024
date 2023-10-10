#include <iostream>
using namespace std;

int main() {
	cout << "Please enter the length of the first side:" << endl;
	float width;
	cin >> width;

	float height;
	cin >> height;

	cout << "Perimeter of rectangle: " << 2 * (width + height) << endl;
	cout << "Face of rectangle: " << width * height << endl;
	return 0;
}