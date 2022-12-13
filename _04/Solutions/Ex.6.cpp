#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a , b , c , d , e;
    cout << "Enter numbers: ";
    cin >> a >> b >> c >> d >> e;
    for ( int x = -100 ; x <= 100; x++ )
    {
        int sum = a*pow(x,4) + b*pow(x,3) + c*pow(x,2) + d*x + e;
        if ( sum >= 0 )
        {
            cout << x << " ";
        }
    }
   
    return 0;
}