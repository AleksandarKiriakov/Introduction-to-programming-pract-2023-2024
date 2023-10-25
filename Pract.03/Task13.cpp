#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int testingNumber = 1;
    int powerOf2 = 0;
    bool isPowerOf2 = false;

    if(num < 1)
    {
        cout << "The number should be above 0!";
    }
    else
    {
        while (testingNumber != num)
        {
            testingNumber *= 2;

            if (testingNumber > num)
            {
                cout << "2^" << powerOf2 << " + ";
                powerOf2 = 0;
                num = num - testingNumber / 2;
                testingNumber = 1;
                continue;
            }
            else if (testingNumber == num)
            {
                cout << "2^" << powerOf2 + 1;
                isPowerOf2 = true;
            }
            powerOf2++;
        }
        if (!isPowerOf2)
        {
            cout << "2^0";
        }
    }
}
