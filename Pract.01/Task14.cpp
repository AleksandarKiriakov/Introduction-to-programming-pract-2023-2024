#include <iostream>
using namespace std;
int main() {

    long long cardNumber;
    long long lastFourDigits;
    cin >> cardNumber;
    lastFourDigits = cardNumber % 10000;

    cout << "XXXXXXXXXXXX" << lastFourDigits;

}