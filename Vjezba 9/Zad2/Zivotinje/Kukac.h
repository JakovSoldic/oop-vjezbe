#pragma once
#define KUKAC_H
#include "../Zivotinje.h"
#include <iostream>
using namespace std;

class Kukac : public Zivotinje
{
public:

};

class Zohar : public Kukac
{
public:
    void giveLegs();
    void giveType();
    int brojNogu = 6;
    string vrsta = "Zohar";
};
