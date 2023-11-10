#include <iostream>
using namespace std;

bool isPrime(int& n) {

    if (n <= 1) 
        return false;

        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
}

    void nextNum(int& num) {

    if (isPrime(num) == true)
       num++;

    
    while (isPrime(num) == false) {

        num++;

    }

}

int main() {

    int firstNum;
    cin >> firstNum;

    nextNum(firstNum);
    cout << firstNum;

    return 0;
}