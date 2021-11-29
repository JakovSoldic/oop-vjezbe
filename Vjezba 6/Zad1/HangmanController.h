#pragma once
#ifndef HANGMANCONTROLLER_H
#define HANGMANCONTROLLER
#include "HangmanModel.h"
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class HangmanController
{
private:
	char letter;
	string lettersLeft = { "ABCDEFGHIJKLMNOPQRSTUVYWXZ" };
	string userInputedLetters;
	string nameHolder;
	string temp, temp2;
	string gameOverWord;
	int currentLives;
	friend class HangmanView;
public:
	//void userLetter(char input);
	void checkLetter(HangmanModel& a, char input);
	bool checkWin(HangmanModel& a);
	bool checkLoss(HangmanModel& a);
	void setCurrentLives(HangmanModel& a);
	void updateLives();
	void availableLetters(string lettersLeft);
	void usedLetters(char input);
	void storeUsedLetters(char input);
	bool lettersAlreadyUsed(char input);
	void mysteryWord(HangmanModel& a);
	bool checkLives();
};
#endif