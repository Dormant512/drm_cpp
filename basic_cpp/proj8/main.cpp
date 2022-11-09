#include <iostream>
#include <cmath>

using namespace std;

// Google style guide

int main() {

	// while loops
	int index = 1;
	while (index <=5) {
		cout << index << endl;
		index++;
	}

	// do while loop
	index = 6;
	do {
		cout << index << endl;
		index++;
	} while (index <= 5);

	// guessing game
	int secretNum = 7;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	bool outOfGuesses = false;

	while (secretNum != guess && !outOfGuesses) {
		if (guessCount < guessLimit) {
			cout << "Enter guess: ";
			cin >> guess;
			guessCount++;
		} else {
			outOfGuesses = true;
		}
	}

	if (outOfGuesses) {
		cout << "You lost." << endl;
	} else {
	cout << "You win." << endl;
	}

	// with do while
	guess = 0;
	guessCount = 0;
	guessLimit = 3;
	outOfGuesses = false;
	do {
		if (guessCount < guessLimit) {
			cout << "Enter guess (dw): ";
			cin >> guess;
			guessCount++;
		} else {
			outOfGuesses = true;
		}
	} while (secretNum != guess && !outOfGuesses);

	if (outOfGuesses) {
		cout << "You lost [2]." << endl;
	} else {
	cout << "You win [2]." << endl;
	}

	return 0;

}
