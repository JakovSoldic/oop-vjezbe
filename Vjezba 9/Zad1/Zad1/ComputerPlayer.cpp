#include "ComputerPlayer.h"
#include <iostream>
#include <random>
#include <stdlib.h>
#include <time.h>
using namespace std;

int ComputerPlayer::Computer_Input()
{
	srand(time(NULL));
	Decisions = rand() % 3;
    switch (Decisions) 
    {
        case 1:
            Numbers = rand() % 3;
            return computerSum += Options[Numbers];
        
        case 2:
            Numbers = rand() % 3;
            computerSum += Options[Numbers];
            Numbers = rand() % 3;
            while (Numbers == computerSum)
            {
                Numbers = rand() % 3;
            }
            return computerSum += Options[Numbers];
        
        case 3:
            computerSum += Options[1];
            computerSum += Options[2];
            return computerSum += Options[3];
    }
}

int ComputerPlayer::Computer_Guess()
{
    srand(time(NULL));
    return computerGuess = rand() % 8;
}