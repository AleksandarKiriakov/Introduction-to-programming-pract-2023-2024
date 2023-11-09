#include <iostream>

using namespace std;

unsigned getNumberInBoundaries() {
    cout << "Enter a number in the boundaries [" << 100 << ", " << 100000 << "]: ";
    unsigned number;
    cin >> number;

    return number;
}

int getNearestNumberDegreeOfTwo() {
    unsigned numberInBoundaries = getNumberInBoundaries();
    int nearestNumberDegreeOfTwo = 64;

    for(int i = 0; numberInBoundaries > 1; i++) {
        if(nearestNumberDegreeOfTwo * 2 < numberInBoundaries) {
            nearestNumberDegreeOfTwo *= 2;
        } else {
            return nearestNumberDegreeOfTwo;
        }
    }
}

int main() {
    cout << getNearestNumberDegreeOfTwo();

    return 0;
}