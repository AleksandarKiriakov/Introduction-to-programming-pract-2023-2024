#include <iostream>

using namespace std;

int main() {
    cout << "Card number: ";
    long long cardNumber;
    cin >> cardNumber;

    cout << "XXXXXXXXXXXX";

    int lastFourDigit = cardNumber % 10000;
    cout << lastFourDigit;

    return 0;
}