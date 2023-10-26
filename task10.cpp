#include <iostream>

using namespace std;

void printNumberInBinaryForm(int number) {
    cout << number << " in binary from: ";

    while(number > 0) {
        cout << number % 2;
        number /= 2;
    }

    cout << endl;
}

int main() {
    printNumberInBinaryForm(15);
    printNumberInBinaryForm(7);
    printNumberInBinaryForm(65);

    return 0;
}