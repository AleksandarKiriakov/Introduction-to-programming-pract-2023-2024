
#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;
    bool isNotEqual = firstNumber < secondNumber || firstNumber > secondNumber;
    cout << isNotEqual;
}


