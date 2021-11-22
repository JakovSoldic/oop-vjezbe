#include <iostream>
#include <string>
#include "Weapon.h"
using namespace std;

void Weapon::setClip(int clip)
{
	this->clip = clip;
	currentClip = clip;
}

void Weapon::action(string input)
{
	if (currentClip == 0)
	{
		cout << "Automatic Reload" << endl;
		setClip(9);
	}
	else
	{
		if (input == "shoot")
		{
			cout << "Bang!" << endl;
			currentClip--;
		}

		if (input == "reload")
		{
			if (currentClip == 9)
			{
				cout << "Clip is already full" << endl;
			}
			else
			{
				cout << "Reloading..." << endl;
				setClip(9);
				cout << "Reloaded" << endl;
			}
		}

		if (input == "check")
		{
			cout << "Current bullet count in clip : " << currentClip;
			cout << endl;
		}
	}
}
