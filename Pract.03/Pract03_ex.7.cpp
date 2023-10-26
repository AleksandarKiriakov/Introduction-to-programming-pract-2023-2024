
#include <iostream>
using namespace std;

int main()
{
    //ex.7
    unsigned int number;
    cout << "Enter a number: ";
    cin >> number;
    for (int a = 1; a <= number ; a++)
    {
        for (int b = 1; b <= number; b++)
        {
            for (int c = 1; c <= number; c++)
            {
                if (a * a + b * b == c * c && a<b && b<c)
                {    
                    cout << "is a triangle " << a << "," << b << "," << c << endl;
                }
            }
        }
    }

}
