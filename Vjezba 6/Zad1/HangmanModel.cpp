#include "HangmanModel.h"
#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

void HangmanModel::setLives(int lives)
{
    this->lives = lives;
}

int HangmanModel::getLives()
{
    return lives;
}

void HangmanModel::pickMovie()
{
    srand(time(0));
    //number of movies in text file: 31
    
    int i = rand() % 31 + 1;
    vector <string> placeHolder;
    string line;
    
    ifstream file ("hangman.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            placeHolder.push_back(line);
        }
    }
    else
        cout << "File not open";
    
    this->movieName = placeHolder[i];
    
    transform(movieName.begin(), movieName.end(), movieName.begin(), ::toupper);
    //cout << movieName;
}