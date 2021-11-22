#include <iostream>
#include <string>
#include "Weapon.h"
using namespace std;

int main()
{

    Weapon a;
    string input;
    
    a.setClip(9);
    
    cout << "Enter four actions : 'shoot' 'reload' 'check' 'exit'" << endl;
    while (input != "exit")
    {
        getline(cin, input);
        a.action(input);
    }
    cout << "Exit" << endl;
    return 0;
}