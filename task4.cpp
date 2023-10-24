#include <iostream>

using namespace std;

int main() {
    cout << "Enter number: ";
    int grade;
    cin >> grade;

    if (grade < 40) {
        cout << "Grade: 2";
    } else if (grade >= 40 && grade < 60) {
        cout << "Grade: 3";
    } else if (grade >= 60 && grade < 70) {
        cout << "Grade: 4";
    } else if (grade >= 70 && grade <= 80) {
        cout << "Grade: 5";
    } else {
        cout << "Grade: 6";
    }

    return 0;
}