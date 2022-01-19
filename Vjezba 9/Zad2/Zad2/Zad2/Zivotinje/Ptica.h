#define PTICA_H
#include "C:\Users\Jake\Desktop\Jakov Soldic Progra\VisualStudio\Vjezba9\Zad2\Zad2\Zad2\Zivotinje.h"
#include <iostream>
using namespace std;

class Ptica : public Zivotinje
{
public:

};

class Vrabac : public Ptica
{
public:
    Vrabac();
    int brojNogu = 2;
    string vrsta = "Vrabac";
};

