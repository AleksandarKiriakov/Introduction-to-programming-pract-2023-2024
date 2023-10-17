#include <iostream>
using namespace std;
int main() {

	cout << "Arabic numeral: ";
	int num;
	cin >> num;

	switch (num) {

	case 1 : 
		
		cout << "Roman numerals: I"; break;

	case 2 : 

		cout << "Roman numerals: II"; break;

	case 3 : 

		cout << "Roman numerals: III"; break;

	case 4 :

		cout << "Roman numerals: IV"; break;

	case 5 : 

		cout << "Roman numerals: V"; break;

    case 6 : 

		cout << "Roman numerals: VI"; break;

	case 7 :

		cout << "Roman numerals: VII"; break;

	case 8 :

		cout << "Roman numerals: VIII"; break;

	case 9 : 

		cout << "Roman numerals: IX"; break;

	case 10 :

		cout << "Roman numerals: X"; break;

	default: cout << "Invalid number";

	}
}