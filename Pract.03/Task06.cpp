#include <iostream>
using namespace std;
int main() {
    
    cout << "Enter the value of N: ";
    int N;
    cin >> N;

    int totalSum = (N * (N + 1)) / 2; 

    int sumOfEnteredNumbers = 0;

    for (int i = 0; i < N - 1; i++) {

        int num;
        cin >> num;
        sumOfEnteredNumbers += num;

    }

    int missingNumber = totalSum - sumOfEnteredNumbers;

    cout << "The missing number is: " << missingNumber;

}
