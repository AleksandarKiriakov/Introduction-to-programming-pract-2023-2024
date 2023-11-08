#include <iostream>

using namespace std;

int main() {
    cout << "Number 1: ";
    int num1;
    cin >> num1;

    cout << "Number 2: ";
    int num2;
    cin >> num2;

    cout << "Number 3: ";
    int num3;
    cin >> num3;

    if(num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    } 

    if(num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if(num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    } 

    cout << num1 << " " <<  num2 << " " << num3;

    return 0;
}