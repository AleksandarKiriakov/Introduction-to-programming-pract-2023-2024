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

int main() {
    cout << "num = ";
    int num;
    cin >> num;

    reverseNumber(num);

    cout << "Number after reverse: " << num;

    return 0;
}