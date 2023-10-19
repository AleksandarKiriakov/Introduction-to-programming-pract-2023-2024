#include <iostream>
using namespace std;

int main()
{
    int day, month;
    cout << "Enter a day: ";
    cin >> day;
    cout << "Enter a month: ";
    cin >> month;
    if (day == 30 || day == 31 || day == 28)
    {
        day = 1;
        month++;
        cout << "The next day is: " << day << " " << month;
    }
    else 
    {
        day++;
        cout << "The next day is: " << day << " " << month;
    }
}


