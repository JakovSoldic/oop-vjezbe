#include <iostream>
#include "Target.h"
using namespace std;

int main()
{
    Target a, b;
    int spaceX , spaceY;
    
    cout << "Enter X position for shooter : ";
    cin >> spaceX;
    cout << "Enter Y position for shooter : ";
    cin >> spaceY;
    
    a.setUpperX(10);
    a.setUpperY(20);
    a.setLowerX(30);
    a.setLowerY(40);
    
    if(a.surfaceArea(spaceX, spaceY))
        cout << "Target hit";
    else
        cout << "Target not hit";
	
    return 0;
}