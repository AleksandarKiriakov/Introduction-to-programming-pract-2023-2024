
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    bool IsBiggerNumber = a > b;
    cout << "The bigger number is: " << (IsBiggerNumber ? a : b);
}

