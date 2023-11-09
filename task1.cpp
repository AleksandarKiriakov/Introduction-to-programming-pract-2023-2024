#include <iostream>

using namespace std;

void pow(int& x, int toThePower) {
    int xCopy = x;

    for(int i = 0; i < toThePower - 1; i++) {
        xCopy = xCopy * x;
    }
    
    x = xCopy;
}

int main() {
    cout << "x = ";
    int x;
    cin >> x;

    cout << "To what power: ";
    int toThePower;
    cin >> toThePower;

    cout << x << " ^ " << toThePower << " = " ;

    pow(x, toThePower);

    cout << x;

    return 0;
}