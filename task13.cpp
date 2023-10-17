#include <iostream>

using namespace std;

int main() {
    cout << "First number: ";
    int first;
    cin >> first;

    cout << "Second number: ";
    int second;
    cin >> second;

    bool areNumbersEqual = first == second;

    cout << !areNumbersEqual;

    return 0;
}