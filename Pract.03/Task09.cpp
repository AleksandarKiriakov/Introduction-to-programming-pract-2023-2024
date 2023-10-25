#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a = 1, b = 1;

    cout << "1 1 "; 

    int c = 3;
    while (c < n) {

        cout << c << " ";
        c = a + b;
        a = b;
        b = c;

    }

}
