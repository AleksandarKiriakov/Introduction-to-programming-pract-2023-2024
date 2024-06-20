#include <iostream>

using namespace std;

int main() {
    cout << "Enter side length: ";
    unsigned sideLength;
    cin >> sideLength;

    cout << "Enter symbol: ";
    char symbol;
    cin >> symbol;

    for (int i = 1; i <= sideLength; i++) {
        for(int j = sideLength - i; j > 0; j--) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) {
            cout << symbol;
        }
        cout << endl;
    }

    for (int i = sideLength - 1; i >= 1; i--) {
        for (int j = 1; j <= sideLength - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}