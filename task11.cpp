#include <iostream>

using namespace std;

int main() {
    cout << "Digit 1: ";
    int digit1;
    cin >> digit1;

    cout << "Digit 2: ";
    int digit2;
    cin >> digit2;

    cout << "Digit 3: ";
    int digit3;
    cin >> digit3;

    if(digit1 > digit2) {
        int temp = digit1;
        digit1 = digit2;
        digit2 = temp;
    } 

    if(digit2 > digit3) {
        int temp = digit2;
        digit2 = digit3;
        digit3 = temp;
    }

    if(digit1 > digit2) {
        int temp = digit1;
        digit1 = digit2;
        digit2 = temp;
    } 

    cout << digit3*100 + digit2*10 + digit1;

    return 0;
}