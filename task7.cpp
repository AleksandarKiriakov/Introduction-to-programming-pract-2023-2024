#include <iostream>

using namespace std;

int main() {
    cout << "Enter number: ";
    unsigned int number;
    cin >> number;

    for(int a = 1; a < number; a++) {
        for(int b = 1; b < number; b++) {
            for(int c = 1; c < number; c++){
                if(a + b > c && a + c > b && b + c > a){
                    cout << " " << a << " " << b << " " << c << endl;
                }
            }
        }
    }

    return 0;
}