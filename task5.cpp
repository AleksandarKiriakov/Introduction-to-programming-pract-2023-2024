#include <iostream>

using namespace std;

int main() {
    cout << "Side a: ";
    int sideA;
    cin >> sideA;

    cout << "Side b: ";
    int sideB;
    cin >> sideB;

    cout << "Side c: ";
    int sideC;
    cin >> sideC;

    cout << ((sideA + sideB) > sideC);

    return 0;
}