
#include <iostream>
using namespace std;

int main()
{
    //ex.7

    char letter;
    cout << "Enter a character: ";
    cin >> letter;
    if (letter >= 'A' && letter <= 'Z')
    {
        char lowercaseLetter = letter + 32;
        cout << "Lowercase letter: " << lowercaseLetter << endl;
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        char uppercaseLetter = letter - 32;
        cout << "Uppercase letter: " << uppercaseLetter << endl;
    }
    else
    {
        cout << "Invalid character!";
    }
}

