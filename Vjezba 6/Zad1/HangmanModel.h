#pragma once
#ifndef HANGMANMODEL_H
#define HANGMANMODEL
#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

class HangmanModel
{
private:
	string movieName;
	int lives;
	friend class HangmanController;
public:
	void setLives(int lives);
	void pickMovie();
	int getLives();
};
#endif