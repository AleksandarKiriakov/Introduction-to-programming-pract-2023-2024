#include <iostream>
using namespace std;
int main() {

	cout << "Dividend: ";
	int Dividend;
	cin >> Dividend;

	cout << "Divisor: ";
	int Divisor;
	cin >> Divisor;

	int quotient = Dividend / Divisor;
	int remainder = Dividend % Divisor;


	cout << "The quotient of the division is : " << quotient << endl;
	cout << "The remainder of the division is : " << remainder;

}
