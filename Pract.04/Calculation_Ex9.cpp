// Calculation_Ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned int calculate(unsigned int a, unsigned int b, char action) 
{
    switch (action)
    {
    case '+': return (a + b); break;
    case '-': return (a - b); break;
    case '*': return (a * b); break;
    case '/': return (a / b); break;
    default: return (a % b);
        break;
    }
}

int main()
{
    unsigned int a, b;
    char action;

    cout << "Input a = ";
    cin >> a;

    cout << "Input b = ";
    cin >> b;

    do
    {
        cout << "Input action = ";
        cin >> action;
    } while (action != '+' && action != '-' && action != '*' && action != '/' && action != '%');

    if (a >= b)
    {
        unsigned int result = calculate(a, b, action);
        cout << result;
    }
    else
    {
        unsigned int result = calculate(b, a, action);
        cout << result;
    }
   
}
