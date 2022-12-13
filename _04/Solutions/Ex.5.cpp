#include <iostream>
using namespace std;
int main ()
{
    int number, tempNumber;
    cout << "Enter a number: " ;
    cin >> number ;
    tempNumber = number;
    if ( tempNumber > 0)
    {
        while ( tempNumber % 2 == 0 )
        {
            tempNumber = tempNumber / 2; 
        }
        if ( tempNumber == 1 )
        {
            cout << "True " << endl;
        }
        else 
        {
            cout << "False " << endl;
        }
    }
   
    return 0;
}