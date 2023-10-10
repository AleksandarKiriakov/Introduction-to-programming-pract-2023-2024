#include<iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 56;
    int help;

    help = x;
    x = y;
    y = help;

    cout << "After swapping: " << endl << "x = " << x << endl << "y = " << y << endl;

    return 0;
}