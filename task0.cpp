#include <iostream>

using namespace std;

unsigned findQuadrant(int x, int y) {
    if(x == 0 && y != 0) {
        return 5;
    } else if(y == 0 && x != 0) {
        return 6;
    }

    if(x > 0 && y > 0) {
        return 1;
    } else if(x > 0 && y < 0) {
        return 2;
    } else if(x < 0 && y < 0) {
        return 3;
    } else {
        return 4;
    }
}

int main() {
    cout << "x = ";
    int x;
    cin >> x;
    
    cout << "y = ";
    int y;
    cin >> y;

    switch(findQuadrant(x, y)) {
        case 1: cout << "Point is in I quadrant"; break;
        case 2: cout << "Point is in II quadrant"; break;
        case 3: cout << "Point is in III quadrant"; break;
        case 4: cout << "Point is in IV quadrant"; break;
        case 5: cout << "Point lies on the Y coordinate"; break;
        case 6: cout << "Point lies on the X coordinate"; break;
    }

    return 0;
}