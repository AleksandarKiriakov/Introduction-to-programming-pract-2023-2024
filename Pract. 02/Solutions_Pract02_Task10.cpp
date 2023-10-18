#include <iostream>
using namespace std;

int main()
{
    double a, b, answer;
    char operators;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operator: ";
    cin >> operators;
    if (operators == '+')
    {
        answer = a + b;
        cout << "The sum of the two numbers is: " << answer;
    }
    else if (operators == '-')
    {
        answer = a - b;
        cout << "The difference of the two numbers is: " << answer;
    }
    else if (operators == '*')
    {
        answer = a * b;
        cout << "The product of the two numbers is: " << answer;
    }
    else 
    {
        if (b == 0)
        {
            cout << "Error!";
        }
        else
        {
            answer = a / b;
            cout << "The quotient of the two numbers is: " << answer;
        }
    }

}

