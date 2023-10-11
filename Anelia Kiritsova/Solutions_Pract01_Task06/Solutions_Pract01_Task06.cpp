
#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    cout << "The quotient of the division is: " << quotient << endl;
    cout << "The remainder of the division is: " << remainder << endl;
}


