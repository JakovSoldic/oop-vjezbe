#pragma once
#ifndef BROJAC_H
#define BROJAC_H
#include "C:\Users\Jake\Desktop\Jakov Soldic Progra\VisualStudio\Vjezba9\Zad2\Zad2\Zad2\Zivotinje.h"
#include <iostream>
using namespace std;

class Brojac
{
public:
    int sum = 0;

    void printajVrstu(Zivotinje& z) 
    {
        for (auto i : z.ZivotinjaVrsta)
            cout<< "Zivotinja: " << i << ' ' << endl;
    }

    void dodajNoge(Zivotinje& z)
    {
            sum += z.getBrojNogu();
    }

    void printajNoge()
    {
        cout << "Noge: " << sum;
    }
};
#endif