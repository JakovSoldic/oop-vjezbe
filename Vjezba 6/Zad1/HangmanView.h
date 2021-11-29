#pragma once
#ifndef HANGMANVIEW_H
#define HANGMANVIEW
#include "HangmanController.h"
#include <iostream>
using namespace std;

class HangmanView
{
private:
	
public:
	void startGame(HangmanController& b);
	void hangmanState(HangmanController& b);
	void displayLives(HangmanController& b);
	void availableLetters(HangmanController& b);
};
#endif