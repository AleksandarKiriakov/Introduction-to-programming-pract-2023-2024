#include <iostream>

using namespace std;

bool isNumberPrime(unsigned number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

void makeIntoNextGreaterPrime(int& num) {
    do {
        num++;
    } while (!(isNumberPrime(num)));
}

int main() {
    cout << "num = ";
    int num;
    cin >> num;

    makeIntoNextGreaterPrime(num);

    cout << num;

    return 0;
}