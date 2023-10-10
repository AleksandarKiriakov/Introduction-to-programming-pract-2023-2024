#include <iostream>
using namespace std;

int main() {
	float PI = 3.14159265;

	cout << "Enter radius: ";
	float radius;
	cin >> radius;

	cout << "Length with radius from input: " << 2 * 3.14 * radius << endl;
	cout << "Face with predefined PI: " << PI * radius * radius << endl;
	return 0;
}