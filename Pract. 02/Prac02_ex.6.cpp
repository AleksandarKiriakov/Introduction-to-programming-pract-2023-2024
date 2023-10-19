
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    //ex.6

    int a;
    int b;
    int c;
    cout << "Enter the first coefficient: ";
    cin >> a;
    cout << "Enter the second coefficient: ";
    cin >> b;
    cout << "Enter the third coefficient: ";
    cin >> c;
    int discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    }
    else
    {
        cout << "There isn't real roots!";
    }


}
