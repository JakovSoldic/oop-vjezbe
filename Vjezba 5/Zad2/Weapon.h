#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
using namespace std;

class Weapon
{
private:
	int spaceCoord;
	int clip;
	int currentClip;

public:
	void setClip(int clip);
	void action(string input);
};
#endif