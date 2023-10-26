
#include <iostream>
using namespace std;

int main()
{
    //ex.9
    int number;
    cout << "Enter a number greater than 3: ";
    cin >> number;
    if (number <= 3)
    {
        cout << "Enter a diffrent number! ";
    }
    int firstNum = 1;
    int secondNum = 1;
    int next = secondNum + firstNum;
    while (firstNum<=number)
    {
        cout << firstNum << " ";
        firstNum = secondNum;
        secondNum = next;
    }
    cout << endl;
}

