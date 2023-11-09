#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int number ;
    int tempNumber;
    int numberCounter = 0;
    int middleNumberCounter = 0;
    int secondMiddleNumberCounter = 0;
    int digitsAfterMiddleDigit = 0;
    int firstDigits = 0;
    int lastDigits = 0;

    cout << "Enter a number: ";
    cin >> number ;
    tempNumber = number;
    
    // devide the number until it reaches 0
    // add counter which add 1 for every time the number is devided by 10
    while ( tempNumber !=0 )
    {
        tempNumber = tempNumber / 10;
        numberCounter = numberCounter + 1;
    }
    
    // number % 2 == 0 -- even , devide counter by 2 and by 2+1
    middleNumberCounter = numberCounter / 2 + 1;
    digitsAfterMiddleDigit = numberCounter - middleNumberCounter;
        
    // find digits until middle digit
    firstDigits = number / pow ( 10 , middleNumberCounter );   
    cout << "Digits before middle digit " << firstDigits << endl; 
    
    int finder = pow ( 10 , digitsAfterMiddleDigit );
    lastDigits = number % finder;
    cout << "Digits after middle digit " << lastDigits << endl;

    if ( firstDigits == 0 )
    {
        cout << "Your result is: "<< lastDigits << "," << lastDigits + 1 << endl;
    }
    else
    {
        cout << "Your result is: " << firstDigits << lastDigits << "," << firstDigits 
        << lastDigits + 1 << endl;
    
    }
    return 1;
}

