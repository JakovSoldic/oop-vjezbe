#pragma once
#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"
#include <iostream>
#include <random>
#include <vector>
using namespace std;

class HumanPlayer : public Player
{
public:
	vector <int> choices = { 1, 2, 5 };
	int input1 = 0;
	int guess1 = 0;
	int sum = 0;
	bool first = false;
	bool second = false;
	bool fifth = false;

	vector <int> choices2 = { 1, 2, 5 };
	int input2 = 0;
	int guess2 = 0;
	int sum2 = 0;
	bool first2 = false;
	bool second2 = false;
	bool fifth2 = false;

	friend class Player;

	void printChoices(vector <int> choices);
	
	int Player_1_Input();
	int Player_1_Guess();
	int Player_2_Input();
	int Player_2_Guess();
};
#endif

