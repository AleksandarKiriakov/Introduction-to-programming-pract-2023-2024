#include <iostream>
using namespace std;
int main() {


	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;


	int x = -100;
	

	while (x >= -100 && x <= 100) {

		int function = a * (x * x * x * x) + b * (x * x * x) + c * (x * x) + d * x + e;

		if (function >= 0) {
			cout << x << " ";
		}

		x++;

	}

}
