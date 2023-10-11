
#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    cin >> firstNumber;
    cin >> secondNumber;
    cin >> thirdNumber;
    bool isAscending = firstNumber < secondNumber && secondNumber < thirdNumber && firstNumber < thirdNumber;
    cout << isAscending;
}

