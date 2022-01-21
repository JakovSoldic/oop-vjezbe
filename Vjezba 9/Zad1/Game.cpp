#include "Game.h"
#include "Player.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

void Game::menu()
{
	cout << "Choose: 1 or 2\n";
	cout << "Player vs Player(1)\n";
	cout << "Player vs Computer(2)\n";
}

void Game::gamePlay()
{
	system("cls");
	Player c;
	menu();
	cout << ">> ";
	while (1)
	{
		cin >> input;
		if (input == 1)
		{
			c.PvP();
			cout << "Player 1 sum: " << c.sumChoices1 << endl;
			cout << "Player 1 guessed: " << c.GetGuess1() << endl;
			cout << "Player 2 sum: " << c.sumChoices2 << endl;
			cout << "Player 2 guessed: " << c.GetGuess2() << endl;
			
			if (c.GetGuess1() == c.sumChoices2)
			{
				cout << "Player 1 wins";
			}
			else if (c.GetGuess2() == c.sumChoices1)
			{
				cout << "Player 2 wins";
			}
			else
			{
				cout << "Nothing";
			}
			break;
		}
		if (input == 2)
		{
			c.PvC();
			cout << "Player 1 sum: " << c.sumChoices1 << endl;
			cout << "Player 1 guessed: " << c.GetGuess1() << endl;
			cout << "Computer sum: " << c.sumChoices3 << endl;
			cout << "Computer guessed: " << c.GetGuess3() << endl;
			
			if (c.GetGuess1() == c.sumChoices3)
			{
				cout << "Player 1 wins";
			}
			else if (c.GetGuess3() == c.sumChoices1)
			{
				cout << "Computer wins";
			}
			else
			{
				cout << "Nothing";
			}
			break;
		}
		else
		{
			system("cls");
			cout << "Wrong input, try again";
			Sleep(500);
			gamePlay();
			break;
		}
	}
}