#include <iostream> 

using namespace std;

void swapChars(char& a, char& b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    cout << "First symbol: ";
    char firstSymbol;
    cin >> firstSymbol;

    cout << "Second symbol: ";
    char secondSymbol;
    cin >> secondSymbol;

    swapChars(firstSymbol, secondSymbol);

    cout << "First and second symbol after swap:" << endl
         << firstSymbol << " -> " << secondSymbol; 

    return 0;
}