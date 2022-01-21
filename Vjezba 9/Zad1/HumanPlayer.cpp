#include "HumanPlayer.h"
#include "Game.h"
#include <iostream>
#include <random>
#include <vector>
#include <conio.h>
#include <Windows.h>
using namespace std;

void HumanPlayer::printChoices(vector <int> choices)
{
	for (auto i : choices)
	{
		cout << i << ' ';
	}
}

int HumanPlayer::Player_1_Input()
{
	system("cls");
	cout << "Player 1" << endl;
	cout << "Choose a number: ";
	printChoices(choices);
	cout << endl << "Press 6 when you are done!" << endl;
	cout << ">> ";
	cin >> input1;

	if (input1 == 1 && first == false)
	{
		choices.erase(remove(choices.begin(), choices.end(), 1), choices.end());
		//choices.erase(choices.begin());
		first = true;
		sum += 1;
		Player_1_Input();
	}

	if (input1 == 1 && first == true)
	{
		choices.push_back(input1);
		first = false;
		sum -= 1;
		Player_1_Input();
	}
	//______________________________________________________
	if (input1 == 2 && second == false)
	{
		choices.erase(remove(choices.begin(), choices.end(), 2), choices.end());
		//choices.erase(choices.begin() + 1);
		second = true;
		sum += 2;
		Player_1_Input();
	}

	if (input1 == 2 && second == true)
	{
		choices.push_back(input1);
		second = false;
		sum -= 2;
		Player_1_Input();
	}
	//______________________________________________________
	if (input1 == 5 && fifth == false)
	{
		choices.erase(remove(choices.begin(), choices.end(), 5), choices.end());
		//choices.erase(choices.begin() + 2);
		fifth = true;
		sum += 5;
		Player_1_Input();
	}

	if (input1 == 5 && fifth == true)
	{
		choices.push_back(5);
		fifth = false;
		sum -= 5;
		Player_1_Input();
	}
	//______________________________________________________
	if (input1 == 6)
	{
		return sum;
	}
	else
	{
		cout << "Wrong input";
		Sleep(500);
		Player_1_Input();
	}
}

int HumanPlayer::Player_1_Guess()
{
	system("cls");
	cout << "Guess a number:";
	cin >> guess1;
	return guess1;
}

int HumanPlayer::Player_2_Input()
{
	system("cls");
	cout << "Player 2" << endl;
	cout << "Choose a number: ";
	printChoices(choices2);
	cout << endl << "Press 6 when you are done!" << endl;
	cout << ">> ";
	cin >> input2;

	if (input2 == 1 && first2 == false)
	{
		choices2.erase(remove(choices2.begin(), choices2.end(), 1), choices2.end());
		//choices.erase(choices.begin());
		first2 = true;
		sum2 += 1;
		Player_2_Input();
	}

	if (input2 == 1 && first2 == true)
	{
		choices2.push_back(input2);
		first2 = false;
		sum2 -= 1;
		Player_2_Input();
	}
	//______________________________________________________
	if (input2 == 2 && second2 == false)
	{
		choices2.erase(remove(choices2.begin(), choices2.end(), 2), choices2.end());
		//choices.erase(choices.begin() + 1);
		second2 = true;
		sum2 += 2;
		Player_2_Input();
	}

	if (input2 == 2 && second2 == true)
	{
		choices2.push_back(input2);
		second2 = false;
		sum2 -= 2;
		Player_2_Input();
	}
	//______________________________________________________
	if (input2 == 5 && fifth2 == false)
	{
		choices2.erase(remove(choices2.begin(), choices2.end(), 5), choices2.end());
		//choices.erase(choices.begin() + 2);
		fifth2 = true;
		sum2 += 5;
		Player_2_Input();
	}

	if (input2 == 5 && fifth2 == true)
	{
		choices2.push_back(5);
		fifth2 = false;
		sum2 -= 5;
		Player_2_Input();
	}
	//______________________________________________________
	if (input2 == 6)
	{
		return sum2;
	}
	else
	{
		cout << "Wrong input";
		Sleep(500);
		Player_2_Input();
	}
}

int HumanPlayer::Player_2_Guess()
{
	system("cls");
	cout << "Guess a number:";
	cin >> guess2;
	return guess2;
}
