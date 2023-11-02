#include <iostream>
using namespace std;

void numberCheck(int firstNumber, int secondNumber, int number) 
{
    if (number >= firstNumber && number <= secondNumber)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

void askUser(int a, int b)
{
    int number = 0;

    cout << endl;

    do
    {
        cout << "Input number: ";
        cin >> number;
    } while (number > b || number < a);

    cout << "Great your number is between " << a << " and " << b;
}

int main()
{
    //ex 6
    int a = 0;
    int b = 0;

    do 
    {
        cout << "Input a = ";
        cin >> a;
        cout << "Input b = ";
        cin >> b;
    } while (a == b);
   

    int number;
    cout << "Input number: ";
    cin >> number;

    if (a > b)
    {
        numberCheck(b, a, number);

        askUser(b, a);
    }
    else
    {
        numberCheck(a, b, number);
        
        askUser(a, b);
    }
}

