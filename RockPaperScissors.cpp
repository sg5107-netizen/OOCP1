#include <iostream>
#include <string>
#include <random>

using namespace std;
int main() {

	string userInputARB;
	int userInput = 0;
	int computerInput = 0;
	int userScore = 0;
	int computerScore = 0;
	int tieCounter = 0;
	string userQuitARB;
	int userQuit = 0;

	cout << "This Program Matches You Against A Computer In Rock Paper Scissors" << endl;
	
	for (userQuit = 0) {

		cout << "Please Choose Rock, Paper, Or Scissors: ";

		for (userInput != 1 && userInput != 2 && userInput != 3) {

			cin >> userInputARB;

			if (userInputARB == "Rock" || userInputARB == "rock") {

				userInput = 1;
			}
			else if (userInputARB == "Paper" || userInputARB == "paper") {

				userInput = 2;
			}
			else if (userInputARB == "Scissors" || userInputARB == "scissors") {

				userInput = 3;
			}
			else {

				cout << "That Is Not A Valid Choice. Please Choose From Rock, Paper, Or Scissors" << endl;
			}
		}
		random_device rd;
		mt19937 r(rd());
		uniform_int_distribution<int> rn(1, 3);
		computerInput = rn(r);

		cout << "Rock" << endl;
		cout << "Paper" << endl;
		cout << "Scissors" << endl;
		cout << "SHOOT" << endl;
		cout << "You Chose: " << userInputARB << endl;
		if (computerInput == 1) {
			cout << "The Computer Chose: Rock" << endl;
		}
		else if (computerInputInput == 2) {
			cout << "The Computer Chose: Paper" << endl;
		}
		else {
			cout << "The Computer Chose: Scissors" << endl;
		}

		if (userInput == computerInput) {
			
			cout << "Its A Tie!" << endl;
			++tieCounter;
		}
		else if (userInput == 1 && computerInput == 3 || userInput == 2 && computerInput == 1 || userInput == 3 && computerInput == 2) {

			cout << "You Win!" << endl;
			++userScore;
		}
		else {

			cout << "The Computer Wins!" << endl;
			++computerScore;
		}

		cout << "Play Again?" << endl;
		cin >> userQuitARB;

		if (userQuitARB == "Yes" || userQuitARB == "yes") {

			userQuit = 1;
		}
		else {

			return 1;
		}
	}

	cout << "Thanks For Playing!" << endl;
	cout << "Final Scores: " << endl;
	cout << "You Scored " << userScore << " Points!" << endl;
	cout << "The Computer Scored " << computerScore << " Points!" << endl;
	if (userScore > computerScore) {
		cout << "You Won!" << endl;
	}
	else if (userScore < computerScore) {
		cout << "The Computer Won!" << endl;
	}
	else {
		cout << "Its A Tie!" << endl;
	}
	cout << "There Were " << tieCounter << " Ties!" << endl;
	cout << "Thanks For Playing!" << endl;
	return 0;
}