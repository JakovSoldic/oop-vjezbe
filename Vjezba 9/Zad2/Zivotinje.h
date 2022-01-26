#pragma once
#define ZIVOTINJE_H
#include <iostream>
#include <vector>
using namespace std;

class Zivotinje
{
public:

	vector <string> ZivotinjaVrsta;
    int ZivotinjeNoge = 0;
    
    int getNumLegs() 
    {
        return ZivotinjeNoge;
    }

    vector <string> getType() 
    {
        return ZivotinjaVrsta;
    }

    void setNumLegs(int brojNogu) 
    {
        ZivotinjeNoge = brojNogu;
    }

    void setType(string vrsta)
    {
        ZivotinjaVrsta.push_back(vrsta);
    }
};
