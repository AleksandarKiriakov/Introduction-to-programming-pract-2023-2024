#include <iostream>

using namespace std;

unsigned findMin(unsigned x, unsigned y) {
    return (x < y) ? x : y;
}

unsigned findGreatestCommonDivisor(unsigned x, unsigned y) {
    unsigned min = findMin(x, y);

    for(int i = min; i >= 1; i--) {
        if(x % i == 0 && y % i == 0) {
            return i;
        }
    }

    return 1;
}

int main() {
    cout << "a = ";
    unsigned a;
    cin >> a;

    cout << "b = ";
    unsigned b;
    cin >> b;

    cout << "c = ";
    unsigned c;
    cin >> c;

    cout << "d = ";
    unsigned d;
    cin >> d;

    unsigned greatestCommonDivisorOfAAndB = findGreatestCommonDivisor(a, b);
    cout << "GCD of a and b: " << greatestCommonDivisorOfAAndB << endl;

    unsigned greatestCommonDivisorOfCAndD = findGreatestCommonDivisor(c, d);
    cout << "GCD of c and d: " << greatestCommonDivisorOfCAndD << endl;

    unsigned greatestCommonDivisorOfAll = findGreatestCommonDivisor(greatestCommonDivisorOfAAndB, greatestCommonDivisorOfCAndD);
    cout << "GCD of a, b, c and d: " << greatestCommonDivisorOfAll << endl;

    return 0;
}