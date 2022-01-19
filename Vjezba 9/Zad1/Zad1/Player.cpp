#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

void Player::PvP()
{
	SetSumChoice1();
	SetGuess1();
	
	SetSumChoice2();
	SetGuess2();
}

void Player::PvC()
{
	SetSumChoice1();
	SetGuess1();

	SetSumChoice3();
	SetGuess3();
}

void Player::SetSumChoice1()
{
	HumanPlayer b;
	sumChoices1 = b.Player_1_Input();

}

int Player::GetSumChoice1()
{
	return sumChoices1;
}

void Player::SetSumChoice2()
{
	HumanPlayer b;
	sumChoices2 = b.Player_2_Input();
}

int Player::GetSumChoice2()
{
	return sumChoices2;
}

void Player::SetSumChoice3()
{
	ComputerPlayer d;
	sumChoices3 = d.Computer_Input();
}

int Player::GetSumChoice3()
{
	return sumChoices3;
}

void Player::SetGuess1()
{
	HumanPlayer b;
	Guess1 = b.Player_1_Guess();
}

void Player::SetGuess2()
{
	HumanPlayer b;
	Guess2 = b.Player_2_Guess();
}

void Player::SetGuess3()
{
	ComputerPlayer d;
	Guess3 = d.Computer_Guess();
}

int Player::GetGuess1()
{
	return Guess1;
}

int Player::GetGuess2()
{
	return Guess1;
}

int Player::GetGuess3()
{
	return Guess3;
}