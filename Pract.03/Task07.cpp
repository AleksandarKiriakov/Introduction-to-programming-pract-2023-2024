#include <iostream>
using namespace std;
int main() {

	unsigned N;
	cin >> N;

	bool isValid;

	for (unsigned i = 1; i < N; i++) {

		for (unsigned j = i; j < N; j++) {

			for (unsigned k = j; k < N; k++) {

			    isValid = k * k ==  i* i + j * j;
				if (isValid) {

					cout << i << " " << j << " " << k << endl;

				}
				
			}

		}

	}

	if (!isValid) {

		cout << "A right triangle cannot be made with these sides";

	}
}