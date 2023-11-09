#include <iostream>
using namespace std;
int main()
{
    int number1 ;
    int number2 ; 
    cout << "Enter 2 numbers: " ;
    cin >> number1 ;
    cin >> number2 ;

    if ( number1 >= number2 )
    {
        int i = number2 ;
        while ( i != 0 )
        {
            if (( number1 % i == 0 ) && ( number2 % i == 0 ))
            cout << i << " " ;
            i--;
        }
    }
    else
    {
        int i = number1 ;
        while ( i != 0 )
        {
            if (( number1 % i == 0 ) && ( number2 % i == 0 ))
            cout << i << " " ;
            i--;
        }
    }

    // for ( int i = 1 ; number1 >= i || number2 >= i; i++ )
    // {
    //     if ( (number1 % i == 0) && (number2 % i == 0 ) )
    //     {
    //         cout << i << " " ;
    //     }
    // }
    return 0;
}