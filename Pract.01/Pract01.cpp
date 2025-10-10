// Prac1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // task 1
    cout << "Oh what" << endl;
    cout << "a happy day!" << endl;
    cout << "Oh yes," << endl;
    cout << "what a happy day!" << endl;

    // task 2
    double side1 = 5.4;
    double side2 = 7.9;
    cout << "Rectangle perimeter is: " << side1 * 2 + side2 * 2 << endl;
    cout << "Rectangle face is: " << side1 * side2 << endl;

    // task 3
    double money = 0;
    cout << "Enter amount: ";
    cin >> money;
    cout << "Amount in euro: " << money * 0.51 << endl;
    cout << "Amount in usd: " << money * 0.6 << endl;

    // task 4
    side1 = 0, side2 = 0;
    cout << "Please enter the length of the first side: ";
    cin >> side1;
    cout << "Please enter the length of the second side: ";
    cin >> side2;
    cout << "Rectangle perimeter is: " << side1 * 2 + side2 * 2 << endl;
    cout << "Rectangle face is: " << side1 * side2 << endl;

    // task 5
    int number1 = 0, number2 = 0, number3 = 0;
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;
    // attempt at completing this task without using if stateements
    cout << number1 << " < " << number2 << " < " << number3 << " " << boolalpha <<
        (number1 < number2 && number2 < number3) << endl << endl;

    // task 6
    number1 = 0, number2 = 0;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Number quotient : " << number1 / number2 << endl;
    cout << "Number division result: " << number1 % number2 << endl;

    // task 7
    int apples = 0, pears = 0, bananas = 0;
    cout << "Enter number of apples: ";
    cin >> apples;
    cout << "Enter number of pears: ";
    cin >> pears;
    cout << "Enter number of bananas: ";
    cin >> bananas;
    cout << "Please dont forget to buy" << apples + " apples, " << pears <<
        " pears and " << bananas << " bananas!" << endl;

    // task 8
    double radius = 0;
    const double PI = 3.14159265;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Circle length is: " << 2 * radius * PI << endl;
    cout << "Circle face is: " << radius * radius * PI << endl;

    // task 9
    double a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    D = b * b - 4 * a * c;
    x1 = (-b - sqrt(D)) / (2 * a);
    x2 = (-b + sqrt(D)) / (2 * a);
    cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;

    // task 10
    a = 0, b = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    a += b;
    b = a - b;
    a -= b;
    cout << "a = " << a << ", " << "b = " << b << endl;

    // task 11
    a = 0, b = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Min number is : " << min(a, b) << endl;

    // task 12
    int total_seconds = 0, days = 0, hours = 0, minutes = 0, seconds = 0;
    cout << "Enter seconds: ";
    cin >> total_seconds;
    days = total_seconds / 86400;
    total_seconds -= days * 86400;
    hours = total_seconds / 3600;
    total_seconds -= hours * 3600;
    minutes = total_seconds / 60;
    total_seconds -= minutes * 60;
    seconds = total_seconds;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;

    // task 13
    number1 = 0, number2 = 0;
    cout << "Enter 2 numbers: ";
    cin >> number1 >> number2;
    // attempt at completing this task without using if stateements
    cout << number1 << " < " << number2 << " " << number1 << " > " << number2 << " " <<
        boolalpha << (number1 < number2 || number1 > number2) << endl;
       
    // task 14
    unsigned long long int credit_card_number = 0;
    cout << "Enter credit card number: ";
    cin >> credit_card_number;
    cout << "Your credit card number ends at: XXXXXXXXXXXX" << credit_card_number % 10000 << endl;
}

