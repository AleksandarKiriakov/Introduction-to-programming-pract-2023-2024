#include <iostream>

using namespace std;

bool checkSymbol(char S) {
    return (S >= 65 && S <= 90) || (S >= 97 && S <= 122);
}

bool isCapitalLetter(char S) {
    if(checkSymbol(S)) {
        return (S >= 65 && S <= 90);
    }
}

int main() {
    cout << isCapitalLetter('A');

    return 0;
}