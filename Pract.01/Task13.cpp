
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << a << "<" << b << endl;
    cout << a << ">" << b << endl;
    bool areNumbersDifferent = a != b;
    cout << boolalpha << areNumbersDifferent;
}


