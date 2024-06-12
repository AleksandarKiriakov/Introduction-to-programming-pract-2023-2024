
#include <iostream>
using namespace std;

int main()
{
    int percent;
    cout << "Enter the percent: ";
    cin >> percent;
    if (percent < 40)
    {
        cout << "Grade: 2";
    }
    else if (percent >= 40 && percent < 60)
    {
        cout << "Grade: 3";
    }
    else if (percent >= 60 && percent < 70)
    {
        cout << "Grade: 4";
    }
    else if (percent >= 70 && percent < 80)
    {
        cout << "Grade: 5";
    }
    else if (percent >= 80 && percent < 90)
    {
        cout << "Grade: 6";
    }
    else
    {
        cout << "Grade: 6+";
    }
}


