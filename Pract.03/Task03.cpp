#include <iostream>
using namespace std;
int main() {

	int n;
	cin >> n;

    int square = n * n;
    int reversedSquare = 0;

    while (square > 0) {
        int digit = square % 10;
        if (digit != 0 || reversedSquare != 0) {
            reversedSquare = reversedSquare * 10 + digit;
        }
        square /= 10;
    }

    cout << reversedSquare;

}