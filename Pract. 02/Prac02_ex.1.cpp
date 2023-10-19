

#include <iostream>
using namespace std;


int main()
{
    
    //ex.1

    int year;
    cout << "Enter the year: ";
    cin >> year;
    if ((year % 4) == 0 && !((year % 100) == 0) || (year % 400) == 0)
    {
        cout << "It's a leap year!";

    }
    else
    {
        cout << "It isn't a leap year!";
    }
}
