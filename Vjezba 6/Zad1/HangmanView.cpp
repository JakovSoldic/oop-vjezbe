#include "HangmanView.h"
#include <iostream>
#include <string>
using namespace std;

void HangmanView::startGame(HangmanController& b)

{
	cout << "--+--------------+--" << endl;
	cout << "T H E  H A N G M A N" << endl;
	cout << "--+--------------+--" << endl;
	cout << "        ________    " << endl;
	cout << "	| /  |           " << endl;
	cout << "	|/   O           " << endl;
	cout << "	|   /|\\         " << endl;
	cout << "	|    |           " << endl;
	cout << "	|   / \\         " << endl;
	cout << "	|                " << endl;
	cout << "________|________   " << endl;
	cout << "The word you have to guess is : " << b.nameHolder;
	cout << endl << "You have " << b.currentLives << " guesses left!" << endl;
	cout << "Available letters : " << b.lettersLeft << endl;
	cout << "Enter any letter: ";
}

void HangmanView::hangmanState(HangmanController& b)
{
	if (b.currentLives == 6)
	{
		cout << "        ________    " << endl;
		cout << "	| /  |           " << endl;
		cout << "	|/               " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "________|________   " << endl;
		cout << "The word you have to guess is : " << b.nameHolder << endl;
	}
	
	if (b.currentLives == 5)
	{
		cout << "        ________    " << endl;
		cout << "	| /  |           " << endl;
		cout << "	|/   O           " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "________|________   " << endl;
		cout << "The word you have to guess is : " << b.nameHolder << endl;
	}

	if (b.currentLives == 4)
	{
		cout << "        ________    " << endl;
		cout << "	| /  |           " << endl;
		cout << "	|/   O           " << endl;
		cout << "	|    |           " << endl;
		cout << "	|    |           " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "________|________   " << endl;
		cout << "The word you have to guess is : " << b.nameHolder << endl;
	}
	
	if (b.currentLives == 3)
	{
		cout << "        ________    " << endl;
		cout << "	| /  |           " << endl;
		cout << "	|/   O           " << endl;
		cout << "	|   /|           " << endl;
		cout << "	|    |           " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "________|________   " << endl;
		cout << "The word you have to guess is : " << b.nameHolder << endl;
	}
	
	if (b.currentLives == 2)
	{
		cout << "        ________    " << endl;
		cout << "	| /  |           " << endl;
		cout << "	|/   O           " << endl;
		cout << "	|   /|\\         " << endl;
		cout << "	|    |           " << endl;
		cout << "	|                " << endl;
		cout << "	|                " << endl;
		cout << "________|________   " << endl;
		cout << "The word you have to guess is : " << b.nameHolder << endl;
	}

	if (b.currentLives == 1)
	{
		cout << "        ________    " << endl;
		cout << "	| /  |           " << endl;
		cout << "	|/   O           " << endl;
		cout << "	|   /|\\         " << endl;
		cout << "	|    |           " << endl;
		cout << "	|   /            " << endl;
		cout << "	|                " << endl;
		cout << "________|________   " << endl;
		cout << "The word you have to guess is : " << b.nameHolder << endl;
	}
	
	if (b.currentLives == 0)
	{
		cout << "        ________    " << endl;
		cout << "	| /  |           " << endl;
		cout << "	|/   O           " << endl;
		cout << "	|   /|\\         " << endl;
		cout << "	|    |           " << endl;
		cout << "	|   / \\         " << endl;
		cout << "	|                " << endl;
		cout << "________|________   " << endl;
		cout << "G A M E  O V E R !" << endl;
		cout << "The word you had to guess was : " << b.gameOverWord << endl;
	}

}

void HangmanView::displayLives(HangmanController& b)
{
	cout << endl << "You have " << b.currentLives << " guesses left!" << endl;
}

void HangmanView::availableLetters(HangmanController& b)
{
	cout << "Available letters : ";
	for (int i = 0; i < b.lettersLeft.size(); i++)
		cout << b.lettersLeft[i];
	cout << endl;
}