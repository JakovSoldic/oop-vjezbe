#pragma once
#ifndef BROJAC_H
#define BROJAC_H
#include "Zivotinje.h"
#include <iostream>
using namespace std;

class Brojac
{
public:
    int sum = 0;

    void printajVrstu(Zivotinje& z) 
    {
        for (auto i : z.getType())
        {
            cout << "dodan: " << i << ' ' << endl;
        }
    }

    void dodajNoge(Zivotinje& z)
    {
            sum += z.getNumLegs();
    }

    void printajNoge()
    {
        cout << "ukupno nogu: " << sum;
    }
};
#endif