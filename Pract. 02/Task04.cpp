

#include <iostream>
using namespace std;


int main()
{
    cout << "Enter test percentage: ";
    int num;
    cin >> num;


    if (num < 0)
    {
        cout << "Not valid percentage!";
    }
    else if ( num < 40)
    {
        cout << "2";
    }
    else if ( num < 60)
    {
        cout << "3";
    }
    else if (num < 70)
    {
        cout << "4";
    }
    else if ( num < 80)
    {
        cout << "5";
    }
    else if ( num < 90)
    {
        cout << "6";
    }
    else if (num <= 100)
    {
        cout << "6+";
    }
    else
    {
        cout << "Not valid percentage!";
    }
}
