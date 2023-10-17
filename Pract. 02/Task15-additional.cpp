#include <iostream>
using namespace std;
int main() {

	cout << "Tomatoes: ";
	int tomatoes;
	cin >> tomatoes;

	cout << "Peppers: ";
	int peppers;
	cin >> peppers;

	cout << "Carrots: ";
	int carrots;
	cin >> carrots;

	cout << "Olives: ";
	int olives;
	cin >> olives;

	cout << "Potatoes: ";
	int potatoes;
	cin >> potatoes;

	cout << "Ml. of flavoring agent: ";
	int flavoringAgent;
	cin >> flavoringAgent;

	cout << "Friends to help: ";
	int friends;
	cin >> friends;

	 bool isValid = (tomatoes == 1 && peppers == 2 && carrots == 4 && olives == 3 && potatoes == 3 && flavoringAgent == 150) || (tomatoes == 2 && peppers == 3 && carrots == 5 && olives == 6 && potatoes == 10 && flavoringAgent == 200 && friends == 1) || (tomatoes == 5 && peppers == 6 && carrots == 12 && olives == 7 && potatoes == 12 && flavoringAgent == 300 && friends == 1);
	


		if (isValid) {

			cout << "Traicho will eat";

		}
		else {

			cout << "Traicho won't eat";

		}

}
