
#include <iostream>
using namespace std;

int main()
{
    double radius, length, area;
    const double PI = 3.14159265;
    cout << "Enter the radius: ";
    cin >> radius;
    length = 2 * PI * radius;
    area = PI * radius * radius;
    cout << "Length: " << length << endl;
    cout << "Area: " << area << endl;
}

