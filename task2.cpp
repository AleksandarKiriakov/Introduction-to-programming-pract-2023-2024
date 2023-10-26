#include <iostream>

using namespace std;

int isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    cout << isEven(8);

    return 0;
}