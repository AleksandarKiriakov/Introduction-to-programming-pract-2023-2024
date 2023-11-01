// PrimeNumber_Ex13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void checkIfPrimeNumber(int number)
{
    int newNumber = sqrt(number);
    int counter = 0;
    for (int i = 2; i <= newNumber; i++)
    {
        if (number % i == 0)
        {
            cout << "The number is not prime!" << endl;
            counter++;
            break;
        }
        else
        {
            continue;
        }
    }

    if (!(counter))
    {
        cout << "The number is prime!" << endl;
    }
}

void printingAllPrimeNumbers(int number)
{
    int oneNumberBeforeEnd = number - 1;
    bool isPrime = true;

    for (int i = 2; i <= number; i++)
    {
        int numberSqrt = ceil(sqrt(i));

        if (i < 3)
        {
            continue;
        }
        else if(i == 3)
        {
            cout << i << " ";
            continue;
        }
        else
        {
            for (int n = 2; n <= numberSqrt; n++)
            {
                if (i % n == 0)
                {
                    isPrime = false;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }

        if (isPrime)
        {
            cout << i << " ";
            continue;
        }

        isPrime = true;
    }
}

bool checkPrimeNumber(int number)
{
    int newNumber = sqrt(number);
    int isPrime = true;
    for (int i = 2; i <= newNumber; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
        else
        {
            continue;
        }
    }

    if (!(isPrime))
    {
        return true;
    }
}

void checkForSum(unsigned int primeNumber)
{
    unsigned int sum = 0;
    bool isPrimeSum = true;
    for (int i = 2; i <= primeNumber; i++)
    {
        int numberSqrt = ceil(sqrt(i));

        if (i < 3)
        {
            continue;
        }
        else
        {
            for (int n = 2; n <= numberSqrt; n++)
            {
                if (i % n == 0)
                {
                    break;
                }
                else
                {
                    sum += i;

                    if (primeNumber == (sum + i))
                    {
                        cout << "The number can be presented by the sum of two prime numbers!";
                        return;
                    }
                    else
                    {
                        isPrimeSum = false;
                        continue;
                    }
                }
            }
        }
    }
    if (!(isPrimeSum))
    {
        cout << "The number can't be presented by the sum of two prime numbers!";
        return;
    }
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    checkIfPrimeNumber(number);

    printingAllPrimeNumbers(number);

    unsigned int primeNumber = 0;

    cout << endl;

    do 
    {
        cout << "Input a prime number: ";
        cin >> primeNumber;
    } while (!(checkPrimeNumber(primeNumber)));

    checkForSum(primeNumber);
}
