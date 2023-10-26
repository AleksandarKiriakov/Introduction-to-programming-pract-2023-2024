#include <iostream>

using namespace std;

int main() {
    cout << "Enter secret number: ";
    int secret_number;
    cin >> secret_number;

    while (true) {
        if (secret_number < 0 || secret_number > 100) {
        cout << "Please enter a valid number, that is between 0 and 100 (inclusive): ";
        cin >> secret_number;
        } else {
            break;
        }
    }

    int guesses_count = 0;

    cout << "Make your guesses!" << endl;

    do {
        cout << "Guess: ";
        int guess;  
        cin >> guess;

        guesses_count++;

        if (guess > secret_number) {
            cout << "Your guess is higher than the secret number!" << endl;
        } else if (guess < secret_number) {
            cout << "Your guess is lower than the secret number!" << endl;
        } else {
            break;
        }
    } while (true);

    cout << "Great job! You guessed the secret number - " << secret_number << "! You tried " << guesses_count << " times!";

    return 0;
}