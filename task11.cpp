#include<iostream>

using namespace std;

int main() {
    cout << "x = ";
    int x;
    cin >> x;

    cout << "y = ";
    int y;
    cin >> y;

    int maximum = x * (x >= y) + y * (y > x);
    int minimum = x * (x <= y) + y * (y < x);

    cout << "The maximum of x and y is: " << maximum << endl;
    cout << "The minimum of x and y is: " << minimum;

    return 0;
}