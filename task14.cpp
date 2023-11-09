#include <iostream>

using namespace std;

int sumOfDigits(int number) {
    int sum = 0;

    do {
        sum += number % 10;
        number /= 10;
    } while (number > 0);

    if (sum > 9) {
        return sumOfDigits(sum);
    }

    return sum;
}

int main() {
    cout << "Enter number: ";
    int number;
    cin >> number;

    cout << "Sum of the digits of the number = " << sumOfDigits(number);

    return 0;
}