#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Target.h"
#include "Weapon.h"
using namespace std;

int main()
{
    srand(time(0));

    Weapon a;
    Target* b;
    Target c;
    string input;
    int numTargets, countHit = 0, countShoot = 0;

    a.setClip(9);

    cout << "Enter number of targets : " << endl;
    cin >> numTargets;
    
    b = new Target[numTargets];
    for (int i = 0; i < numTargets; i++)
    {
        b[i].setUpperX(30);//(rand() % 50 + 1
        b[i].setUpperY(50);
        b[i].setLowerX(15);//(rand() % 25 + 1
        b[i].setLowerY(20);
    }

    int spaceX, spaceY;
    cout << "Enter X position for shooter : ";
    cin >> spaceX;
    a.setWeaponX(spaceX);
    cout << "Enter Y position for shooter : ";
    cin >> spaceY;
    a.setWeaponY(spaceY);

    cout << "Enter actions : 'shoot' 'check' 'reposition' 'reload' 'exit'" << endl;
    while (input != "exit")
    {
        getline(cin, input);
        if (countShoot == 9)
        {
            cout << "Targets hit : " << countHit << endl;
            countShoot = 0;
        }
        else if (input == "shoot")
        {
            a.action(input);
            for (int i = 0; i < numTargets; i++)
            {
                if (c.surfaceArea(spaceX, spaceY, b[i]))
                {
                    cout << "Target hit!" << endl;
                    countHit++;
                }
                else
                {
                    cout << "Target " << i << " miss! Try again!" << endl;
                }
            }
            countShoot++;
        }
        else if (input == "reposition")
        {
            cout << "Enter new X position for shooter : ";
            cin >> spaceX;
            a.setWeaponX(spaceX);
            cout << "Enter new Y position for shooter : ";
            cin >> spaceY;
            a.setWeaponY(spaceY);
        }
        else
            a.action(input);
    }
    cout << "Exit" << endl;
 
    return 0;
}