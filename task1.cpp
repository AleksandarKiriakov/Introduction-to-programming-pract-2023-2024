#include <iostream>

using namespace std;

int main() {
    cout << "Year: ";
    unsigned year;
    cin >> year;

    if (year % 400 == 0) {
        cout << year << " is a leap year.";
    } else if (year % 100 == 0) {
        cout << year << " is not leap year.";
    } else if (year % 4 == 0) {
        cout << year << " is a leap year.";
    } else {
        cout << year << " is not leap year.";
    }

    return 0;
}