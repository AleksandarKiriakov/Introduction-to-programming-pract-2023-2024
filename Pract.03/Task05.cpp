#include <iostream>
using namespace std;
int main() {

	int num;
	cin >> num;

	bool isValid = num >= 0 && num <= 100;
	int counter = 0;
	
	if (isValid) {

		int newNum;
		cin >> newNum;
		counter++;

		while (newNum != num) {

			if (newNum > num) { 
				
				cout << newNum << " > " << num << endl;
			
			}
			else { 
				
				cout << newNum << " < " << num << endl; 
			
			}
			
			cin >> newNum;
			counter++;

		}

		cout <<"Tries: " << counter;

	}
	else { 

		cout << "Invalid num!";

	}

}