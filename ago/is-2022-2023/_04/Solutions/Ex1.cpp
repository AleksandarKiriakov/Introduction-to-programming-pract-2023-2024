#include <iostream>
using namespace std;
int main()
{
    int number ;
    int sum = 0;
    cout << "Enter numbers: ";
    do
    {
        cin >> number ;
        sum = sum + number ;
    }
    while ( number != 0 ) ;
    cout << "Your result is: " << sum << endl ;
    
    return 0;
}