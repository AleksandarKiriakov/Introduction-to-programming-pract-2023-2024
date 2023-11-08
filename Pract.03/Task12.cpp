#include <iostream>
using namespace std;
int main() {

    int number;
    cin >> number;
    bool isPowerOfTwo;

    if (number > 0) {
        isPowerOfTwo = true;
        while (number > 1) {
            if (number % 2 != 0) {
                isPowerOfTwo = false;
                break;
            }
            number /= 2;
        }
    }
    else {

        cout << "The number is not a power of two";

    }
       
        if (isPowerOfTwo) {
            cout << "The number is a power of two";
        }
        else {
            cout << "The number is not a power of two";
        }
    }


