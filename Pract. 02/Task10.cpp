
#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    char sign;
    cin >> a>> sign >> b;

    switch (sign)
    {
    case '-': cout << a <<sign << b <<'=' << a - b; break;
    case '+': cout << a << sign << b << '=' << a + b;break;
    case '*': cout << a << sign << b << '=' << a * b;break;
    case '/':
        if (b == 0)
        {
            cout << "You can't divide by zero!!!";
        }
        else
        {
            cout << a << sign << b << '=' << a / b;break;
        }
    default: "Not valid sign!";
        break;
    }
    
    
}


