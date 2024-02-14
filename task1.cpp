#include <iostream>

using namespace std;

int main() {
    cout << "Enter number: ";
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}