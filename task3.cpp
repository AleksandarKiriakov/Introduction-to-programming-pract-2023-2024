#include <iostream>

using namespace std;

int main() {
    cout << "First number: ";
    int first;
    cin >> first;

    cout << "Second number: ";
    int second;
    cin >> second;

    cout << (first > second) ? first : second;

    return 0;
}