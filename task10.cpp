#include<iostream>

using namespace std;

int main() {
    int first = 10;
    int second = 56;
    int temp;

    cout << "Before swapping: " << endl << "first = " << first << endl << "second = " << second << endl;

    temp = first;
    first = second;
    second = temp;

    cout << "After swapping: " << endl << "first = " << first << endl << "second = " << second << endl;

    return 0;
}