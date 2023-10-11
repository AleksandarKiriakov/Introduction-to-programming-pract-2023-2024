#include <iostream>
using namespace std;
int main() {

	cout << "First number: ";
	int num1;
	cin >> num1;

	cout << "Second number: ";
	int num2;
	cin >> num2;

	cout << num1 << "<" << num2 << " " << num1 << ">" << num2 << " " << (num1 != num2 ? "true" : "false") << endl;

}
