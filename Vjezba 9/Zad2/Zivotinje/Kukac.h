#pragma once
#define KUKAC_H
#include "C:\Users\Jake\Desktop\Jakov Soldic Progra\VisualStudio\Vjezba9\Zad2\Zad2\Zad2\Zivotinje.h"
#include <iostream>
using namespace std;

class Kukac : public Zivotinje
{
public:

};

class Zohar : public Kukac
{
public:
    Zohar();
    int brojNogu = 6;
    string vrsta = "Zohar";
};
