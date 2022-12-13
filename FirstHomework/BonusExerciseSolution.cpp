#include <iostream>
#include <cmath>
#include <queue>

using std::queue;
using std::cin;
using std::cout;

int intPow(int number, int power)
{
    int result = 1;
    while (power != 0)
    {
        if ((power & 1) == 1)
            result *= number;
        number *= number;
        power >>= 1;
    }
    return result;
}

int swapDigits(int number, int location1, int location2)
{
    int  digit1, digit2, digitDiff;

    digit1 = (number / intPow(10, location1)) % 10;
    digit2 = (number / intPow(10, location2)) % 10;
    digitDiff = digit1 - digit2;

    number -= intPow(10, location1) * digitDiff;
    number += intPow(10, location2) * digitDiff;

    return number;
}


int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    if (num1 < num2)
    {
        std::swap(num1, num2);
    }

    int checkingTo = intPow(10, (int)log10(num1) + 1);
    int* fewestMoves = new int[checkingTo];
    for (int i = 0; i < checkingTo; i++)
    {
        fewestMoves[i] = -1;
    }
    fewestMoves[num2] = 0;

    queue<int> current;
    current.push(num2);
    int  maxDistance =
        ((int)log10(num1) + (int)log10(num2) + 2)
        , checkingNumber, checkingLength, nextNumber;

    while (!current.empty())
    {
        checkingNumber = current.front();
        current.pop();
        checkingLength = (int)log10(checkingNumber) + 1;
        if (fewestMoves[checkingNumber] > maxDistance - 1 || checkingNumber == num1)
        {
            break;
        }

        for (int i = 0; i < 10; i++)
        {
            nextNumber = checkingNumber * 10 + i;

            if (nextNumber < checkingTo && fewestMoves[nextNumber] == -1)
            {
                current.push(nextNumber);
                fewestMoves[nextNumber] = fewestMoves[checkingNumber] + 1;
            }
        }

        nextNumber = checkingNumber / 10;
        if (nextNumber < checkingTo && fewestMoves[nextNumber] == -1)
        {
            current.push(nextNumber);
            fewestMoves[nextNumber] = fewestMoves[checkingNumber] + 1;
        }

        for (int i = 0; i < checkingLength; i++)
        {
            for (int j = i + 1; j < checkingLength; j++)
            {
                nextNumber = swapDigits(checkingNumber, i, j);
                if (nextNumber < checkingTo && fewestMoves[nextNumber] == -1)
                {
                    current.push(nextNumber);
                    fewestMoves[nextNumber] = fewestMoves[checkingNumber] + 1;
                }
            }
        }
    }

    if (fewestMoves[num1] != -1)
    {
        cout << fewestMoves[num1];
    }
    else
    {
        cout << maxDistance;
    }

    delete[] fewestMoves;
    return 0;
}

