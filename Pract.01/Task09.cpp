
#include <iostream>
using namespace std;
#include <math.h>;

int main()
{
    cout << "a:";
    int a;
    cin >> a;
    cout << "b:";
    int b;
    cin >> b;
    cout << "c:" ;
    int c;
    cin >> c;
    int D;
    D = b * b - 4 * a * c;
    int x1 = (-b + sqrt(D))/ 2;
    int x2 = (-b - sqrt(D)) / 2;
    cout << "x1= "<<x1 << endl;
    cout << "x2= " << x2;
    
    
}

