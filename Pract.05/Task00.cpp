#include <iostream>
using namespace std;

void whichQuadrant(int x, int y) {

	if (x >= 1 && y >= 1) {

		cout << "first quadrant"; 

	}
	else if (x <= -1 && y >= 1) {

		cout << "second quadrant";

	}
	else if (x <= -1 && y <= -1) {

		cout << "third quadrant";

	}
	else if (x >= 1 && y <= -1) {

		cout << "fourth quadrant";

	}
	else if (x == 0 && y != 0) {

		cout << "Point lies on the Y coordinate";

	}
	else if (x != 0 && y == 0){

		cout << "Point lies on the X coordinate";

	}
	else {

		cout << "Point lies in the center";

	}
}

int main() {

	int x;
	cin >> x;

	int y;
	cin >> y;

	whichQuadrant(x, y);

	return 0;
}

