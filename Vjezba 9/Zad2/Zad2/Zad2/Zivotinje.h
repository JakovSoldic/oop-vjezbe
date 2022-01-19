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
    
    int getBrojNogu() 
    {
        return ZivotinjeNoge;
    }

    vector <string> getVrsta() 
    {
        return ZivotinjaVrsta;
    }

    void setBrojNogu(int brojNogu) 
    {
        ZivotinjeNoge = brojNogu;
    }

    void setVrsta(string vrsta)
    {
        ZivotinjaVrsta.push_back(vrsta);
    }
};
