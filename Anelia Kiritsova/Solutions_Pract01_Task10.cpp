
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int c = a;
    a = b;
    b = c;
    cout << a << endl;
    cout << b;
}

