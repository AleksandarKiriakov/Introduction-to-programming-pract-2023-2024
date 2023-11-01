// NOD_Ex11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2, num3, num4;

    std::cout << "Input first number: ";
    std::cin >> num1;
    std::cout << "Input second number: ";
    std::cin >> num2;
    std::cout << "Input third number: ";
    std::cin >> num3;
    std::cout << "Input fourth number: ";
    std::cin >> num4;

    int result1 = gcd(num1, num2);

    int result2 = gcd(num3, num4);

    int result3 = gcd(num1, num4);

    std::cout << "The greates common divisor of " << num1 << " and " << num2 << " is " << result1 << std::endl;
    std::cout << "The greates common divisor of " << num3 << " and " << num4 << " is " << result2 <<std:: endl;
    std::cout << "The greates common divisor of all is " << result3;
}