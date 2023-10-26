
#include <iostream>
using namespace std;

int main()
{
    //ex.3

    unsigned int n;
    do
    {
        cout << "Enter a number: ";
        cin >> n;
    } while (n == 0);
    unsigned powNumber = n * n;
    unsigned reversedNumber = 0;
    while (powNumber != 0)
    {
        reversedNumber *= 10;
        reversedNumber += powNumber % 10;
        powNumber /= 10;
    }
    cout << reversedNumber;

}

