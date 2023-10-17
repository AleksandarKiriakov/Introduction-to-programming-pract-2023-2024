#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter symbol: ";
    cin >> ch;


    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        if (ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }

        switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "This symbol is latin vowel" << endl;
            break;
        default:
            cout << "This symbol is latin consonant" << endl;
            break;
        }
    }
    else {
        cout << "That is not a latin letter" << endl;
    }

}
