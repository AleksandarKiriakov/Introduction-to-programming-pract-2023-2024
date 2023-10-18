// Zad-double_stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// Input: amount of tomatoes, peppers, carrots, olives, potatoes, flavouring agents and if a friend will help
	int numberOfTomatoes, numberOfPeppers, numberOfCarrots, numberOfOlives, numberOfPotatoes, mlFlavouringAgents;
	bool friendComesToHelp = false;

	cout << "Enter amount of tomatoes: ";
	cin >> numberOfTomatoes;
	cout << "Enter amount of peppers: ";
	cin >> numberOfPeppers;
	cout << "Enter amount of carrots: ";
	cin >> numberOfCarrots;
	cout << "Enter amount of olives: ";
	cin >> numberOfOlives;
	cout << "Enter amount of potatoes: ";
	cin >> numberOfPotatoes;
	cout << "Enter amount of flavouring agents: (Use ml) ";
	cin >> mlFlavouringAgents;
	cout << "Is a friend coming to help? (Enter a boolean or number of friends) ";
	cin >> friendComesToHelp;

	// collegue salad: 
	// - 1 tomatoes
	// - 2 peppers
	// - 4 carrots
	// - 3 olives
	// - 3 potatoes
	// - 150 ml flavouring agents
	// - needn't friend

	// collegue soup:
	// - 2 tomatoes
	// - 3 peppers
	// - 5 carrots
	// - 6 olives
	// - 10 potatoes
	// - 200 ml flavouring agents
	// - need a friend

	// collegue caserrole:
	// - 5 tomatoes
	// - 6 peppers
	// - 12 carrots
	// - 7 olives
	// - 12 potatoes
	// - 300 ml flavouring agents
	// - need a friend

	// Output: boolean about the outcome of Traicho's situation
	cout << ((
		(numberOfTomatoes >= 5
			&& numberOfPeppers >= 6
			&& numberOfCarrots >= 12
			&& numberOfOlives >= 7
			&& numberOfPotatoes >= 12
			&& mlFlavouringAgents >= 300
			&& friendComesToHelp
			)
		|| (numberOfTomatoes >= 2
			&& numberOfPeppers >= 3
			&& numberOfCarrots >= 5
			&& numberOfOlives >= 6
			&& numberOfPotatoes >= 10
			&& mlFlavouringAgents >= 200
			&& friendComesToHelp
			)
		|| (numberOfTomatoes >= 1
			&& numberOfPeppers >= 2
			&& numberOfCarrots >= 4
			&& numberOfOlives >= 3
			&& numberOfPotatoes >= 3
			&& mlFlavouringAgents >= 150
			)
		) ? "Traicho has the ingredients to make a delicious meal"
		: "Traicho is gonna have to go through the day hungrier than expected");
}

