#pragma once
#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include "Player.h"
#include <iostream>
#include <random>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
using namespace std;

class ComputerPlayer : public Player
{
public:
	int Decisions = rand() % 3;
	int Options[3] = { 1, 2, 5 };
	int Numbers;
	int computerSum = 0;
	int computerGuess;

	int Computer_Input();
	int Computer_Guess();
};
#endif
