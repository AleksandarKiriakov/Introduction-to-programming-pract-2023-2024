

#include <iostream>
using namespace std;

int main()
{
    double num;
    cin >> num;
    double num1;
    cin >> num1;
    double num2;
    cin >> num2;
    bool isAscending = num < num1 && num1<num2;
    cout << boolalpha << isAscending;
}

