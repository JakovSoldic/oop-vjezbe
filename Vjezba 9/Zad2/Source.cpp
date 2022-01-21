#include "Zivotinje.h"
#include "Brojac.h"
#include "Zivotinje\Kukac.h"
#include "Zivotinje\Ptica.h"
#include "Zivotinje\Pauk.h"
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