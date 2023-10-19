
#include <iostream>
using namespace std;

int main()
{
    //ex.10

    int num1;
    int num2;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation(+,-,*,/): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;
    double result;
    switch (operation)
    {
    case '+': result = num1 + num2;
        cout << "Result: " << result; break;
    case '-': result = num1 - num2;
        cout << "Result: " << result; break;
    case '*': result = num1 * num2;
        cout << "Result: " << result; break;
    case '/': if (num2 == 0)
                    {
                         cout << "Division by zero is not allowed!";
                     }
             else
                    {
                         result = num1 / num2;
                         cout << "Result: " << result; break;
                     }

    }


}
