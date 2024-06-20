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

void printFactorization(int number) {
    int numberCopy = number;

    for (int i = 2; i < number; i++) {
        if(isNumberPrime(i) && (numberCopy % i == 0 )) {
            do {
                cout << i << ".";
                numberCopy /= i;
            } while (numberCopy % i == 0);
        }
    }
}

int main() {
    cout << "Enter number: ";
    int number;
    cin >> number;

    printFactorization(number);

    return 0;
}