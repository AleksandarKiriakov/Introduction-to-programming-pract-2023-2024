
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    int x1, x2;
    int discriminant;
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    x1 = (-b + sqrt(discriminant)) / 2 * a;
    x2 = (-b - sqrt(discriminant)) / 2 * a;
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2;
}
