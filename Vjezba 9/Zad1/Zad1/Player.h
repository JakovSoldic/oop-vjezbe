#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include "Game.h"
#include <iostream>
#include <random>
#include <vector>
using namespace std;

class Player
{
public:
	Game a;
	int P1, P2;
	int sumChoices1;
	int sumChoices2;
	int sumChoices3;
	int Guess1;
	int Guess2;
	int Guess3;

	void PvP();
	void PvC();
	int GetSumChoice1();
	void SetSumChoice1();
	int GetSumChoice2();
	void SetSumChoice2();
	int GetSumChoice3();
	void SetSumChoice3();
	void SetGuess1();
	int GetGuess1();
	void SetGuess2();
	int GetGuess2();
	void SetGuess3();
	int GetGuess3();
};
#endif
