#pragma once
#define PAUK_H
#define TARANTULA_T
#include "../Zivotinje.h"
#include <iostream>
using namespace std;

class Pauk : public Zivotinje
{
public:

};

class Tarantula : public Pauk
{
public:
    void giveLegs();
    void giveType();
    int brojNogu = 8;
    string vrsta = "Tarantula";
};