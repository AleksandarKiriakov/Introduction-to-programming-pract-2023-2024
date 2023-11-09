#include <iostream>

using namespace std;

void print(char S, int N) {
    for(int i = 0; i < N; i++) {
        cout << S;
    }
}

int main() {
    print('*', 10);

    return 0;
}