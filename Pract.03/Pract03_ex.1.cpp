
#include <iostream>
using namespace std;

int main()
{
    //ex.1

    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    for (size_t i = n-1; i >= 1; i--)
    {
        for (size_t j = 1; j >= i; j++)
        {
            cout << j;
      }
        cout << endl;
    }
    
}
