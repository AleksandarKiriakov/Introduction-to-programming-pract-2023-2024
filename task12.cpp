#include <iostream>

using namespace std;

int main() {
    cout << "Date: ";
    int day;
    cin >> day;

    int month;
    cin >> month;

    while(month < 0 || month > 12 || day < 0 || day > 31 || (month == 2 && day > 28)){
        cout << "Enter a new valid date: ";
        cin >> day;
        cin >> month;
    }

    if(month % 2 == 1) {
        if (day == 31) {
            month += 1;
            day = 1;
        } else {
            day += 1;
        }
    } else {
        if(month == 2) {
            if (day == 28) {
                month += 1;
                day = 1;
            } else {
                day += 1;
            }
        } else if (day == 30) {
            month += 1;
            day = 1;
        } else {
            day += 1;
        }
    } 

    cout << "Next date: " << day << " " << month;

    return 0;
}