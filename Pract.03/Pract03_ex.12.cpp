
#include <iostream>
using namespace std;
int main()
{
    //ex.12
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number <= 0)
    {
        cout << "Invalid number.";
    }
    else if ((number & (number - 1)) == 0) 
    {
        cout << number << " is a power of 2." << endl;
    }
    else {
        cout << number << " is not a power of 2." << endl;
    }

}

