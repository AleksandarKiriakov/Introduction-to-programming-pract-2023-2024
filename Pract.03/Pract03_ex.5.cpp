
#include <iostream>
using namespace std;

int main()
{
    //ex.5
    int num;
    do
    {
        cout << "Enter a number from 0 to 100: ";
        cin >> num;

    } while (num<0 || num>100);

    int guess;
    int count = 0;
    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        if (guess<num)
        {
            cout << "less than first number" << endl;
        }
        else if (guess > num)
        {
            cout << "Greater than first number" << endl;
        }
        count++;
    } while (guess<num || guess>num);
    cout << "You're trying to guess " << count << " times." << endl;
}
