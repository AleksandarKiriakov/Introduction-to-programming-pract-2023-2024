#include <iostream>
using namespace std;

bool isTheSpaceOpen(char arr[3][3], int x, int y) {
	return arr[x - 1][y - 1] == ' ';
}

void printTable(char arr[3][3]) {
	for (int i = 0; i < 3; i++) {

	}
	cout << "    1   2   3    x" << endl
		<< endl
		<< "1   " << arr[0][0] << " | " << arr[0][1] << " | " << arr[0][2] << endl
		<< "   ---+---+---" << endl
		<< "2   " << arr[1][0] << " | " << arr[1][1] << " | " << arr[1][2] << endl
		<< "   ---+---+---" << endl
		<< "3   " << arr[2][0] << " | " << arr[2][1] << " | " << arr[2][2] << endl
		<< endl
		<< "y" << endl << endl;
	return;
}

bool isWin(char arr[3][3], char currentChar) {
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] == currentChar
		|| arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[0][2] == currentChar
		|| arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2] && arr[0][0] == currentChar
		|| arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2] && arr[1][0] == currentChar
		|| arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2] && arr[2][0] == currentChar
		|| arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0] && arr[0][0] == currentChar
		|| arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1] && arr[0][1] == currentChar
		|| arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2] && arr[0][2] == currentChar
		)
	{
		return true;
	}
	return false;
}

int main() {
	// ----------------------------------Tic-Tac-Toe---------------------------
	int x, y;
	unsigned openSpaces = 9;

	char arr[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '},
	};

	do {
		printTable(arr);

		char currentTurn = (openSpaces % 2) ? 'X' : 'O';
		cout << "It's " << currentTurn << " turn! Type a coordiante! Ex: \"2 3\": " << endl;
		cin >> x >> y;
		if (x < 1 || x > 3 || y < 1 || y > 3) {
			cout << "Wrong input. Try again" << endl;
			break;
		}
		else if (isTheSpaceOpen(arr, x, y)) {
			openSpaces--;
			arr[x - 1][y - 1] = currentTurn;

			if (isWin(arr, currentTurn)) {
				cout << currentTurn << " has won" << endl;
				break;
			}
		}
		else {
			cout << "Wrong input. Try again" << endl;
		}
	} while (openSpaces > 0);

	printTable(arr);
}
