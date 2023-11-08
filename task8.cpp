#include <iostream>

using namespace std;

int main() {
    cout << "Enter a single digit: ";
    unsigned int digit;
    cin >> digit;

    char one = 'I';
    char five = 'V';
    char ten = 'X';

    if(digit == 1) {
        cout << one;
    } else if(digit == 2) {
        cout << one << one;
    } else if(digit == 3) {
        cout << one << one << one;
    } else if(digit == 4) {
        cout << one << five;
    } else if(digit == 5) {
        cout << five;
    } else if(digit == 6) {
        cout << five << one;
    } else if(digit == 7) {
        cout << five << one << one;
    } else if(digit == 8) {
        cout << five << one << one << one;
    } else if(digit == 9) {
        cout << one << ten;
    } else if(digit == 10) {
        cout << ten;
    }

    return 0;
}