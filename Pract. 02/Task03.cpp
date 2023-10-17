#include <iostream>
using namespace std;
int main() {

	cout << "First number: ";
	int num1;
	cin >> num1;

	cout << "Second number: ";
	int num2;
	cin >> num2;

	int biggerNumber = (num1 > num2) ? num1 : num2;
	cout <<"Bigger number: " << biggerNumber;

}