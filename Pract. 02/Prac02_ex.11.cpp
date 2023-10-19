
#include <iostream>
using namespace std;

int main()
{
    //ex.11

    int num1, num2, num3;
    cout << "Enter three numbers from 0 to 9: ";
    cin >> num1 >> num2 >> num3;
    int small, middle, big;
    if (num1 >= num2 && num1 >= num3)
    {
        big = num1;
        if (num2 >= num3)
        {
            middle = num2;
            small = num3;
        }
        else
        {
            middle = num3;
            small = num2;
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        big = num2;
        if (num1 >= num3)
        {
            middle = num1;
            small = num3;
        }
        else
        {
            middle = num3;
            small = num1;
        }
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        big = num3;
        if (num1 >= num2)
        {
            middle = num1;
            small = num2;
        }
        else
        {
            middle = num2;
            small = num1;
        }
    }
    cout << "The biggest number is: " << big << middle << small;

}
