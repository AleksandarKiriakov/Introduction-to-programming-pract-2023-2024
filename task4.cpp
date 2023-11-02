#include <iostream>

using namespace std;

void swapAscending(int& x, int& y) {
    if(x < y) {
        int temp = x;
        x = y;
        y = temp;
    }
}

void makeInAscendingOrder(int& a, int& b, int& c) {
    swapAscending(a, b);
    swapAscending(b, c);
    swapAscending(a, b);
}

int main() {
    cout << "a = ";
    int a;
    cin >> a;

    cout << "b = ";
    int b;
    cin >> b;

    cout << "c = ";
    int c;
    cin >> c;

    makeInAscendingOrder(a, b, c);

    cout << "Numbers after ascending ordering:" << endl 
         << "a = " << a << endl 
         << "b = " << b << endl
         << "c = " << c << endl;

    return 0;
}