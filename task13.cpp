#include <iostream>
#include <math.h>

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

void printSmallerPrimeNumbers(unsigned number) {
    cout << "Smaller numbers that are prime: ";

    for (int i = 2; i < number; i++) {
        if(isNumberPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

bool isSumOfOtherPrimes(unsigned number) {
    if(number <= 3) {
        return 0;
    }

    unsigned smallerPrime = 0;
    unsigned middlePrime = 0;

    for (int i = 1; i < number; i++) {
        int x = i;
        int y = number - x;
        
        if(isNumberPrime(x) && isNumberPrime(y)) {
            return 1;
        }
    }

    return false;
}

int main() {
    cout << "Enter number: ";
    unsigned number;
    cin >> number;

    cout << isNumberPrime(number) << endl;
    printSmallerPrimeNumbers(number);
    cout << isSumOfOtherPrimes(number);

    return 0;
}