
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a letter: ";
    char symbol;
    cin >> symbol;

    if (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z')
    {
        switch (symbol)
        { 
            case 'a':
            case 'e':
            case 'i':
            case 'u':
            case 'o':
            case 'A':
            case 'I':
            case 'U':
            case 'E':
            case 'O':
            cout << "Vowel letter";break;
            default: cout << "Not a vowel letter ";
            break;
        }
    }
}