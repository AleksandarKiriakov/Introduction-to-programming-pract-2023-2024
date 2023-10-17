#include <iostream>
using namespace std;
int main() {

	cout << "Enter operation: ";

	double num1 = 0;
	cin >> num1;

	char ch;
	cin >> ch;

	double num2 = 0;
	cin >> num2;

	bool isValid = num2 != 0;

		switch (ch) {


		case '+':

			cout << num1 + num2; break;

		case '-':

			cout << num1 - num2; break;


		case '*':

			cout << num1 * num2; break;

		case '/':

			if(isValid) {

				cout << num1 / num2; break;
			
			}

			else {

				cout << "You cannot divide by 0!"; break; 
			
			}
			
		default: cout << "Invalid operation";

		}
	}
	

