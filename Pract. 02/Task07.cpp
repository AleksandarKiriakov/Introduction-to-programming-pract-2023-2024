#include <iostream>
using namespace std;
int main() {
    char ch;

   cout << "Letter: ";
   cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
         ch = ch - 32;
        cout << "Upper letter: " << ch <<endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
        cout << "Lower letter: " << ch <<endl;
    }
    else {
        cout << "Invalid Symbol" <<endl;
    }
}
