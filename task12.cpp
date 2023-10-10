#include<iostream>

using namespace std;

int main() {
    cout << "Seconds: ";
    int seconds;
    cin >> seconds;

    int days = seconds / 86400;
    seconds -= 86400 * days;

    int hours = seconds / 3600;
    seconds -= 3600 * hours;

    int minutes = seconds / 60;
    seconds -= 60 * minutes;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";

    return 0;
}