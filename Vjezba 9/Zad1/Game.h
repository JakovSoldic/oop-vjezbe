#pragma once
#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;

class Game
{
private:
	int input;
	int rounds = 0;
	friend class Player;
public:
	void menu();
	void gamePlay();
};
#endif
