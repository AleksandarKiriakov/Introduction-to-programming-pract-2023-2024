#include <iostream>

using namespace std;

void reverseNumber(int& num) {
    int newNum = 0;

    if(num % 10 == 0) {
        num /= 10;
    }

    do {
        newNum *= 10;
        newNum += (num % 10);
        num /= 10;
    } while (num > 0);

    num = newNum;
}

void transformNumWithDigit(int& a, int digit) {
    int aCopy = a;
    int newNum = 0;

    do {
        newNum *= 10;
        int digitSum = (aCopy % 10) + digit;

        if(digitSum > 9) {
            digitSum %= 10;
        }

        newNum += digitSum * 10;

        aCopy /= 10;
    } while(aCopy > 0);

    reverseNumber(newNum);
    a = newNum;
}

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    cout << "Enter a digit to transform the number with: ";
    int digit;
    cin >> digit;

    transformNumWithDigit(num, digit);

    cout << num;

    return 0;
}