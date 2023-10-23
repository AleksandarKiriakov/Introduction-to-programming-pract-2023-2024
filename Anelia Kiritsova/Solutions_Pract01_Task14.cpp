
#include <iostream>
using namespace std;

int main()
{
    long long cardNumber;
    cin >> cardNumber;
    int num1 = cardNumber % 10;
    cardNumber /= 10;
    int num2 = cardNumber % 10;
    cardNumber /= 10;
    int num3 = cardNumber % 10;
    cardNumber /= 10;
    int num4 = cardNumber % 10;
    cout << "XXXXXXXXXXXX" << num4 << num3 << num2 << num1;
}

