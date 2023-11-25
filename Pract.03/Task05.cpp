

#include <iostream>
using namespace std;

int main()
{
    int secretNum;
	cin >> secretNum;
	int attempts = 0;

	for (int i = 0; i < 50; i++)
	{
		cout << endl;
	}


	int guessingNum;

	if (secretNum > 0 && secretNum <= 100)
	{
		do
		{
			cout << "Guess a number: ";
			cin >> guessingNum;

			if (guessingNum < secretNum)
			{
				cout << "The secret number is higher!" << endl;
			}
			else if(guessingNum > secretNum)
			{
				cout << "The secret number is lower!" << endl;
			}
			attempts++;

		} while (guessingNum != secretNum);
		cout << "Congratulations! You guessed that " << secretNum << " is the secret number.It took you " << attempts << " tries.";
	}
	else
	{
		cout << "The number should be between 1 - 100";
	}

}


