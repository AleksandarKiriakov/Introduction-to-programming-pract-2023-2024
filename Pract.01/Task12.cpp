
#include <iostream>
using namespace std;

int main()
{
    cout << "Seconds: ";
    int numberOfSeconds = 0;
    cin >> numberOfSeconds;

    int days;
    days = numberOfSeconds / 86400;
    numberOfSeconds = numberOfSeconds % 86400;
    cout << days << " days ";

    int hours;
    hours = numberOfSeconds / 3600;
    numberOfSeconds = numberOfSeconds % 3600;
    cout << hours << " hours ";

    int minutes;
    minutes = numberOfSeconds / 60;
    numberOfSeconds = numberOfSeconds % 60;
    cout << minutes << " minutes ";

    int seconds;
    seconds = numberOfSeconds % 60;
    cout << seconds << " seconds ";
}


