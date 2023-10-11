
#include <iostream>
using namespace std;

int main()
{
    int days, hours, minutes, seconds, realSeconds;
    int n; 
    cout << "Enter seconds: ";
    cin >> seconds;
    days = seconds / 86400;
    n = days * 86400;
    hours = (seconds - n) / 3600;
    n += hours * 3600;
    minutes = (seconds - n) / 60;
    n += minutes * 60;
    realSeconds = seconds - n;
    cout << days << endl;
    cout << hours << endl;
    cout << minutes << endl;
    cout << realSeconds << endl;
}

