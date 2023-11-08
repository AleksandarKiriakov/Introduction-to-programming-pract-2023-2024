#include <iostream>
using namespace std;

bool symbols(char& symbol1, char& symbol2) {

    if (symbol1 < symbol2) {

        int temp = symbol1;
        symbol1 = symbol2;
        symbol2 = temp;
        return true;

    }

    return false;

}

int main() {

    char firstSymb, secondSymb;
    cin >> firstSymb >> secondSymb;

    if (symbols(firstSymb, secondSymb)) {

        cout << firstSymb << " " << secondSymb;

    }
    else {

        int asciiCode1 = firstSymb;
        int asciiCode2 = secondSymb;
        cout << asciiCode1 << " " << asciiCode2;

    }

    return 0;
}
