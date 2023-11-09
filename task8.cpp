#include <iostream>

using namespace std;

int pow(int num, unsigned N) {
    int result = num;

    for(int i = 1; i < N; i++) {
        result *= num;
    }

    return result;
}

int main() {
    cout << pow(10, 2) << endl;
    cout << pow(5, 4);

    return 0;
}