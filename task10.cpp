#include <iostream>

using namespace std;

int main() {
    cout << "Enter number (greater than 3): ";
    unsigned boundary;
    cin >> boundary;

    int first = 1;
    int second = 1;

    cout << first << " " << second;
    
    while(first + second < boundary) {
        int temp = first + second;
        first = second;
        second = temp;
        cout << " " << second;
    }

    return 0;
}