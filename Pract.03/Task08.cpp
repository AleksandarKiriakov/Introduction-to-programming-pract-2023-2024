#include <iostream>
using namespace std;
int main() {
   
    cout << "Number: ";
    int num;
    cin >> num;

    cout << "Symbol: ";
    char symbol;
    cin >> symbol;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++) {
        

            cout << " ";

        }

        for (int j = 0; j < 2 * i - 1; j++) {
        

            cout << symbol;

        }

        cout << endl;
    }

    for (int i = num - 1; i > 0; i--) {

        for (int j = 0; j < num - i; j++) {

            cout << " ";

        }

        for (int j = 0; j < 2 * i - 1; j++) {

            cout << symbol;

        }
        cout << endl;
    }

}