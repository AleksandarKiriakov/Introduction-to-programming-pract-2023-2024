#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;

    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    int minimum;
    int maximum;

    minimum = (num1 + num2 - abs(num1 - num2)) / 2;

    maximum = (num1 + num2 + abs(num1 - num2)) / 2;

    cout << "Minimum is: " << minimum << endl;
    cout << "Maximum is: " << maximum;

}

