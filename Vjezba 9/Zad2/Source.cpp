#include "Zivotinje.h"
#include "Brojac.h"
#include "C:\Users\Jake\Desktop\Jakov Soldic Progra\VisualStudio\Vjezba9\Zad2\Zad2\Zad2\Zivotinje\Kukac.h"
#include "C:\Users\Jake\Desktop\Jakov Soldic Progra\VisualStudio\Vjezba9\Zad2\Zad2\Zad2\Zivotinje\Ptica.h"
#include "C:\Users\Jake\Desktop\Jakov Soldic Progra\VisualStudio\Vjezba9\Zad2\Zad2\Zad2\Zivotinje\Pauk.h"
#include <iostream>
using namespace std;

int main()
{
	Zohar zh;
	Tarantula t;
	Vrabac v;
	Brojac br;
	Zivotinje z;
	br.dodajNoge(zh);
	br.dodajNoge(t);
	br.dodajNoge(v);

	br.printajVrstu(t);
	br.printajVrstu(zh);
	br.printajVrstu(v);
	br.printajNoge();
}