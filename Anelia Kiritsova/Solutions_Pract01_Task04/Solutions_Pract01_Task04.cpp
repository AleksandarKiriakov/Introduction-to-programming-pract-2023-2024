
#include <iostream>
using namespace std;

int main()
{
    double width, height;
    double perimeter, area;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    perimeter = 2 * (width + height);
    area = width * height;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
}

