#include <iostream>
using namespace std;

int main()
{
    int arabicNumber;
    cout << "Enter the arabic number: ";
    cin >> arabicNumber;
    switch (arabicNumber) 
    {
        case 1: cout << "The roman numeral is: I"; break;
        case 2: cout << "The roman numeral is: II"; break;
        case 3: cout << "The roman numeral is: III"; break;
        case 4: cout << "The roman numeral is: IV"; break;
        case 5: cout << "The roman numeral is: V"; break;
        case 6: cout << "The roman numeral is: VI"; break;
        case 7: cout << "The roman numeral is: VII"; break;
        case 8: cout << "The roman numeral is: VIII"; break;
        case 9: cout << "The roman numeral is: IX"; break;
        default: cout << "Invalid number."; break;
    }
}


