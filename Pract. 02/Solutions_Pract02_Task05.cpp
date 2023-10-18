#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the first side of the triangle: ";
    cin >> a;
    cout << "Enter the second side of the triangle: ";
    cin >> b;
    cout << "Enter the third side of the triangle: ";
    cin >> c;
    if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        cout << "The triangle is valid.";
    }
    else
    {
        cout << "The triangle is not valid.";
    }
}


