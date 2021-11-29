#include "HangmanModel.h"
#include "HangmanController.h"
#include "HangmanView.h"
#include <iostream>
#include <limits>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	HangmanModel a;
	HangmanController b;
	HangmanView c;
	char input;


	a.pickMovie();
	a.setLives(6);
	b.setCurrentLives(a);
	b.mysteryWord(a);
	c.startGame(b);
	cin >> input;
	
	if (islower(input))
	{
		input = toupper(input);
	}
	
	while (!b.checkLoss(a))
	{
		b.checkLetter(a, input);
		c.hangmanState(b);
		if (b.checkWin(a) && !b.checkLoss(a))
		{
			break;
		}
		else if (!b.checkLoss(a) && !b.checkLoss(a))
		{
			c.displayLives(b);
			c.availableLetters(b);
			
			cout << "Enter another letter : ";
			cin >> input;
			
			if (islower(input))
			{
				input = toupper(input);
			}
		}
	}
	return 0;
}

/*
if (b.lettersAlreadyUsed(input))
{
	b.checkLetter(a, input);
	c.hangmanState(b);
	if (b.checkWin(a) && !b.checkLoss(a))
	{
		break;
	}
	else if (!b.checkLoss(a) && !b.checkLoss(a))
	{
		b.storeUsedLetters(input);
		c.availableLetters(b);
		cout << "Enter another letter : ";
		cin >> input;
	}
}
else if (!b.lettersAlreadyUsed(input))
{
	cout << "Letter already used! Input different letter : ";
	cin >> input;
}*/

/*while (!b.checkGameState(a))
	{
		b.checkLetter(a, input);
		c.hangmanState(b);
		if (!b.checkGameState(a))
		{
			c.availableLetters(b);
			cout << "Enter another letter : ";
			cin >> input;
		}
		else if (b.checkGameState(a))
		{
			break;
		}
	}*/