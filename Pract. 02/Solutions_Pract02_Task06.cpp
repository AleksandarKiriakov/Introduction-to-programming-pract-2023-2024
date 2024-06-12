#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, discriminant, x1, x2;
    cout << "Enter the first coefficient: ";
    cin >> a;
    cout << "Enter the second coefficient: ";
    cin >> b;
    cout << "Enter the third coefficient: ";
    cin >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant == 0)
    {
        x1 = x2 = -b / 2 * a;
        cout << "The solution is: " << endl << x1;
    }
    else if (discriminant < 0)
    {
        cout << "Does not have a real solution.";
    }
    if (discriminant > 0)
    {
        if (a == 0)
        {
            x1 = x2 = -c / b;
            cout << "The solution is: " << endl << x1;
        }
        else if (b == 0 && a != 0)
        {
            x1 = -sqrt(-c) / sqrt(a);
            x2 = sqrt(-c) / sqrt(a);
            cout << "The solution is: " << endl << x1 << endl;
            cout << x2;
        }
        else if (c == 0)
        {
            x1 = 0;
            x2 = -b / a;
            cout << "The solution is: " << endl << x1 << endl;
            cout << x2;
        }
        else if (b == 0 && c == 0)
        {
            cout << 0;
        }
        else
        {
            x1 = (-b + sqrt(discriminant)) / 2 * a;
            x2 = (-b - sqrt(discriminant)) / 2 * a;
            cout << "The solution is: " << endl << x1 << endl;
            cout << x2;
        }
    }
}


