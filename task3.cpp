#include <iostream>

using namespace std;

int main() {
    cout << "Enter a positive integer: ";
    unsigned int positiveInteger;
    cin >> positiveInteger;

    positiveInteger *= positiveInteger;

    while(positiveInteger != 0) {
        int temp = positiveInteger % 10;

        if (temp == 0) {
            positiveInteger /= 10;
            continue;
        }

        cout << temp;

        positiveInteger /= 10;
    }

    return 0;
}