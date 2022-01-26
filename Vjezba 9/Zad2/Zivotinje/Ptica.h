#define PTICA_H
#include "../Zivotinje.h"
#include <iostream>
using namespace std;

class Ptica : public Zivotinje
{
public:

};

class Vrabac : public Ptica
{
public:
    void giveLegs();
    void giveType();
    int brojNogu = 2;
    string vrsta = "Vrabac";
};

