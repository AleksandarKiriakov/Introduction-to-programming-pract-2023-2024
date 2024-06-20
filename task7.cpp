#include <iostream>

using namespace std;

bool isInsideBoundaries(int number, int lowerBoundary, int upperBoundary) {
    return number > lowerBoundary && number < upperBoundary;
}

int askUser(int from, int to) {
    while(true) {
        cout << "Enter a number inside the boundaries [" << from << ", " << to << "]: ";
        int number;
        cin >> number;

        if(number > from && number < to){
            return number;
        }
    }
}

int main() {
    askUser(100, 250);

    return 0;
}