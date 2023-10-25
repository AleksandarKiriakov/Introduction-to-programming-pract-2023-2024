#include <iostream>

using namespace std;

int main() {
    cout << "Enter a 4 digit number between 1000 and 9999: ";
    unsigned number;
    cin >> number;

    int firstPlusFourth = number % 10;
    number /= 10;
    int secondPlusThird = number % 10;
    number /= 10;
    secondPlusThird = secondPlusThird + (number % 10)*10;
    number /= 10;
    firstPlusFourth = firstPlusFourth + number *10;
    
    if(firstPlusFourth > secondPlusThird) {
        cout << "greater (" << firstPlusFourth << ">" << secondPlusThird << ")";
    } else if (firstPlusFourth < secondPlusThird) {
        cout << "less (" << firstPlusFourth << "<" << secondPlusThird << ")";
    } else {
        cout << "equal (" << firstPlusFourth << "=" << secondPlusThird << ")";
    }

    return 0;
}