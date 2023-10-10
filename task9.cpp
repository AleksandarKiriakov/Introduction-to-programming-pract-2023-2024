#include<iostream>
#include<math.h>
using namespace std;

int main() {
    cout << "a = ";
    int a;
    cin >> a;

    cout << "b = ";
    int b;
    cin >> b;

    cout << "c = ";
    int c;
    cin >> c;

    int D = (b * b) - (4 * a * c);
    int x1 = (-b + sqrt(D)) / (2 * a);
    int x2 = (-b - sqrt(D)) / (2 * a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}