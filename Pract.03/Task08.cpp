#include <iostream>
using namespace std;

int main() {
    int num;
    char symbol;

    cout << "Enter a number between 2-9: ";
    cin >> num;
    cout << "Enter a symbol:  ";
    cin >> symbol;

    for (int i = 1; i <= num; i++) 
    {                                                          
        for (int j = 0; j < num - i; j++) 
        {                                                   
            cout << " ";                                                                    
        }                                                                                   
        for (int j = 0; j < 2 * i - 1; j++) 
        {                                               
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

    return 0;
}
