#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
using namespace std;

class Weapon
{
private:
	int weaponX;
	int weaponY;
	int clip;
	int currentClip;

public:
	void setWeaponX(int weaponX);
	void setWeaponY(int weaponY);
	void setClip(int clip);
	void action(string input);
};
#endif