#include <iostream> 

using namespace std;

bool isPositive(int num) {
    return num > 0;
}

bool isNegative(int num) {
    return num < 0;
}

int main() {
    cout << isPositive(90) << endl << isNegative(-9);

    return 0;
}