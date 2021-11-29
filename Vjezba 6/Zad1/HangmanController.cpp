#include "HangmanController.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void HangmanController::checkLetter(HangmanModel& a, char input)
{
	bool check = false;
	bool once = false;

	if (currentLives > 0)
	{
		for (int i = 0; i < a.movieName.size(); i++)
		{
			if (a.movieName[i] == input)
			{
				if (lettersAlreadyUsed(input))
				{
					nameHolder[i] = input;
					cout << input << " IS ONE OF THE LETTERS!" << endl;
					usedLetters(input);
					storeUsedLetters(input);
					check = true;
				}
				else if (!lettersAlreadyUsed(input) && once == false)
				{
					cout << "LETTER ALREADY USED!" << endl;
					check = true;
					once = true;
				}

			}
		}

		if (check == false)
		{
			if (lettersAlreadyUsed(input))
			{
				cout << "INCORRECT LETTER!" << endl;
				updateLives();
				usedLetters(input);
				storeUsedLetters(input);
			}
			else if (!lettersAlreadyUsed(input) && once == false)
			{
				cout << "LETTER ALREADY USED!" << endl;
			}
		}
	}
}

bool HangmanController::checkWin(HangmanModel& a)
{
	if (a.movieName == nameHolder)
	{
		cout << "You won the game";
		return true;
	}
}

bool HangmanController::checkLoss(HangmanModel& a)
{
	return (checkLives());
}

void HangmanController::setCurrentLives(HangmanModel& a)
{
	currentLives = a.getLives();
}

void HangmanController::updateLives()
{
	currentLives--;
}

bool HangmanController::checkLives()
{
	return (currentLives == 0);
}

void HangmanController::usedLetters(char input)
{
	for (int i = 0; i < lettersLeft.size(); i++)
	{
		if (input == lettersLeft[i])
		{
			lettersLeft.erase(remove(lettersLeft.begin(), lettersLeft.end(), lettersLeft[i]), lettersLeft.end());
		}
	}
}

void HangmanController::storeUsedLetters(char input)
{
	temp2 += input;
	for (int i = 0; i < temp2.size(); i++)
	{
		if (userInputedLetters[i] != input)
		{
			userInputedLetters += input;
		}
	}
}

bool HangmanController::lettersAlreadyUsed(char input)
{
	auto findLetter = userInputedLetters.find(input);
	if (findLetter != std::string::npos)
	{
		return false;
	}
}

void HangmanController::mysteryWord(HangmanModel& a)
{
	gameOverWord = a.movieName;
	for (int i = 0; i < a.movieName.size(); i++)
	{
		if (isalpha(a.movieName[i]))
		{
			temp += "_";
		}
		else if (isspace(a.movieName[i]))
		{
			temp += " ";
		}
		else if (isdigit(a.movieName[i]))
		{
			temp += a.movieName[i];
		}
		else if (ispunct(a.movieName[i]))
		{
			temp += a.movieName[i];
		}

	}
	nameHolder = temp;
}



