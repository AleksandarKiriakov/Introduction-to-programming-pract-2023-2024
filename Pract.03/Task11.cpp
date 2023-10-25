#include <iostream>
using namespace std;
int main() {

    int a;
    cin >> a;
    int b;
    cin >> b;
   
    if (a > b) {

        int temp = a;
        a = b;
        b = temp;
       
    }

    for (int num = a; num <= b; num++) {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        }
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }

}
