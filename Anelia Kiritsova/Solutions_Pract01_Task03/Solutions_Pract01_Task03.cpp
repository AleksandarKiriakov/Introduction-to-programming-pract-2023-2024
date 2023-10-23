
#include <iostream>
using namespace std;

int main()
{
    double sumInLev;
    double sumInEuro;
    double sumInDollar;
    cout << "Enter ballance in leva: ";
    cin >> sumInLev;
    sumInEuro = sumInLev / 1.95;
    sumInDollar = sumInLev / 1.84;
    cout << "Your ballance in euro is: " << sumInEuro << endl;
    cout << "Your ballance in dollar is: " << sumInDollar << endl;
}


