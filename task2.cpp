#include <iostream>

using namespace std;

int main() {
    cout << "Enter symbol: ";
    char symbol;
    cin >> symbol;

    if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122)) {
        if (symbol == 65 || symbol == 69 || symbol == 73 || symbol == 79 || symbol == 85 || 
        symbol == 97 || symbol == 101 || symbol == 105 || symbol == 111 || symbol == 117 
        ) {
            cout << "The letter is a vowel";
        } else {
            cout << "The letter is a consonant";
        }
    }

    return 0;
}