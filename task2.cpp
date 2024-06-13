#include <iostream> 

using namespace std;

void random(int& x, int& y, int& z) {
    y -= x;
    x *= x;
    z += 10;
}

int main() {
    cout << "x = ";
    int x;
    cin >> x;

    cout << "y = ";
    int y;
    cin >> y;

    cout << "z = ";
    int z;
    cin >> z;

    random(x, y, z);

    cout << "Numbers after transformations: " << endl << "x = " << x << endl << "y = " <<  y << endl << "z = " << z;
    return 0;
}