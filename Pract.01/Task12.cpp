#include <iostream>
using namespace std;
int main() {

	cout << "Seconds: ";
	long long inputSeconds;
	cin >> inputSeconds;

	int days = inputSeconds * 1.15741E-5;

	int hours = (inputSeconds - days * 86400) * 0.0002777778;

	int minutes = (inputSeconds - (days * 86400 + hours * 3600)) * 0.0166666667;

	int remaingSeconds = inputSeconds - (days * 86400 + hours * 3600 + minutes * 60);

	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << remaingSeconds << " seconds";

}
