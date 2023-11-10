#include <iostream>
using namespace std;

void accendingOrder(int& num1, int& num2, int& num3) {

    int sum = num1 + num2 + num3;

        int min = num1;

        if (num2 < min) 
            min = num2;
        
        if (num3 < min) 
            min = num3;
        
        int max = num2;

        if (num1 > max)
            max = num1;

        if (num3 > max)
            max = num3;

       int middle = sum - (max + min);

       num1 = min;
       num2 = middle;
       num3 = max;
    
}

int main() {

    int x, y, z;
    cin >> x >> y >> z;

    accendingOrder(x, y, z);
    cout << x << " " << y << " " << z;


    return 0;
}