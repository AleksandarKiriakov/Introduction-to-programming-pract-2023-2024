#include <iostream>

using namespace std;

void abs(int& num, char smth) {
    if (num < 0) {
        num = -num;
    }
}

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    abs(num, 'a');

    cout << "The absolute value of the number: " << num;

    return 0;
}