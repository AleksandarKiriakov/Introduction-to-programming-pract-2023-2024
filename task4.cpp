#include <iostream>

using namespace std;

int main() {
    cout << "m = ";
    unsigned int m;
    cin >> m;

    cout << "n = ";
    unsigned int n;
    cin >> n;

    int counter = 1;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << counter++;
        }
        cout << endl;
    }

    return 0;
}