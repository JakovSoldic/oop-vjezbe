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
	zh.giveLegs();
	zh.giveType();

	Tarantula t;
	t.giveLegs();
	t.giveType();
	
	Vrabac v;
	v.giveLegs();
	v.giveType();
	
	Brojac br;
	Zivotinje z;
	
	br.addLegs(zh);
	br.addLegs(t);
	br.addLegs(v);

	br.printType(t);
	br.printType(zh);
	br.printType(v);
	br.printLegs();
}