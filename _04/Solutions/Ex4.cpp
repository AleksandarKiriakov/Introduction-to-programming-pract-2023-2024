#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number1, number2;
    int found = 0, count = 0;
    cout << "Enter 2 numbers: ";
    cin >> number1 >> number2;
    for (int i = number1; i <= number2; i++ )
       {
           for ( int j = 2; j <= sqrt(i); j++) 
            {
               if ( i % j == 0 )
               {
                    count++;
               }
            }
               if( count == 0 && i != 1 )
               { 
                    found++;
                    cout << i << " ";
                    count = 0;
               }
            count = 0; 
       }
 
    return 0;
}