#include <iostream>
using namespace std;
int main() {

	cout << "m: ";
	int m;
	cin >> m;

	cout << "n: ";
	int n;
	cin >> n;

	int num = 1;


	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {

			cout << num++<< " ";

		}

		cout << endl;

	}
}