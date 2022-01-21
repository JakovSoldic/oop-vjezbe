#pragma once
#define PAUK_H
#define TARANTULA_T
#include "C:\Users\Jake\Desktop\Jakov Soldic Progra\VisualStudio\Vjezba9\Zad2\Zad2\Zad2\Zivotinje.h"
#include <iostream>
using namespace std;

class Pauk : public Zivotinje
{
public:

};

class Tarantula : public Pauk
{
public:
    Tarantula();
    int brojNogu = 8;
    string vrsta = "Tarantula";
};