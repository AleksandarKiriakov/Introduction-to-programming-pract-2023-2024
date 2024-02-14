#include <iostream>

using namespace std;

int main() {
    cout << "Enter number: ";
    int number;
    cin >> number;

    for (int i = 1; i < number; i++) {
        int x = i;
        int y = number - x;
        cout << "x = " << x << " y = " << y << endl;
    }

    return 0;
}