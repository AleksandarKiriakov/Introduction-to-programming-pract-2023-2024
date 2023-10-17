#include <iostream>
using namespace std;
int main() {

	cout << "Enter num: ";
	int num;
	cin >> num;

	int firstDigit = num/1000;
	int secondDigit = (num / 100) % 10;
	int thirdDigit = (num % 100) / 10;
    int fourthDigit = num % 10;

	int firstNewNum = firstDigit * 10 + fourthDigit;
	int secondNewNum = secondDigit * 10 + thirdDigit; 

		int isValid = num >= 1000 && num <= 9999;

	if (isValid) {
		if (firstNewNum > secondNewNum) {

			cout << "greater " << "(" << firstNewNum << ">" << secondNewNum << ")";

		}
		else if (secondNewNum > firstNewNum) {

			cout << "less " << "(" << firstNewNum << "<" << secondNewNum << ")";

		}
		else {

			cout << "equal " << "(" << firstNewNum << "=" << secondNewNum << ")";

		}
	}
	else { 
		    cout << "Invalid num";
	   }
}