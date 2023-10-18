#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
    {
        cout << "It is a Latin letter and ";
        switch (letter)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cout << "a vowel."; break;
            default: cout << "a consonant."; break;
        }
    }
    else
    {
        cout << "It is not a Latin letter.";
    }
}


