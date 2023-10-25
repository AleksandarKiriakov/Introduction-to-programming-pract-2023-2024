#include <iostream>
using namespace std;
int main() {

	cout << "Enter n: ";
	unsigned int n;
	cin >> n;

	for ( int x = 1; x < n; x++) {

		 unsigned int y = n - x;
		cout << "x = " << x << " " << "y = " << y << endl;

	}

}

