#include <iostream>
using namespace std;

int euclideanAlgoritm(int num1, int num2) {
	while (num1 != num2) {
		num1 > num2 ? num1 -= num2 : num2 -= num1;
	}
	return num1;
}

main() {
	int num1, num2, num3, num4;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;
	cout << "Enter the fourth number: ";
	cin >> num4;
	int nOD1 = euclideanAlgoritm(num1, num2);
	int nOD2 = euclideanAlgoritm(num3, num4);
	int allNumsNOD = euclideanAlgoritm(nOD1, nOD2);
	cout << nOD1 << endl
		<< nOD2 << endl
		<< allNumsNOD;
}