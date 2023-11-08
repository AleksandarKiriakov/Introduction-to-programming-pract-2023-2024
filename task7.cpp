#include <iostream>

using namespace std;

int main() {
    cout << "Enter symbol: ";
    char symbol;
    cin >> symbol;

    if(symbol >= 65 && symbol <= 90) {
        symbol += 32;
    } else if (symbol >= 97 && symbol <= 122) {
        symbol -= 32;
    } else {
        cout << "Invalid character!";
    }

    cout << symbol;

    return 0;
}