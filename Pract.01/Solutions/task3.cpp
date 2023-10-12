#include <iostream>
using namespace std;

int main() {
	double leva;
	cin >> leva;

	cout << "The sum in euro: " << leva / 1.955 << endl;
	cout << "The sum in dollars: " << leva / 1.846 << endl;
	return 0;
}