
#include <iostream>
using namespace std;

int main()
{
    //ex.5

    int a;
    int b;
    int c;
    cout << "Enter the first side: ";
    cin >> a;
    cout << "Enter the second side: ";
    cin >> b;
    cout << "Enter the third side: ";
    cin >> c;
    bool triangle = ((a < b + c) && (b < a + c) && (c < a + b));
    if (triangle)
    {
        cout << "It's a triangle!" << endl;
    }
    else
    {
        cout << "It isn't a triangle!";
    }

}

