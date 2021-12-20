#include "Timer.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

timer::timer(int x, int y, double z)
{
	h = x;
	m = y;
	s = z;
}

timer::timer()
{
	h = 0;
	m = 0;
	s = 0;
}

double timer::turnToSeconds()
{
	double hs = h * 60 * 60;
	double ms = m * 60;
	double ss = s;
	return hs + ms + ss;
}

timer timer::operator+=(timer& t)
{
	h += t.h;
	m += t.m;
	s += t.s;
	return *this;
}

timer timer::operator/=(size_t a)
{
	h /= a;
	m /= a;
	s /= a;
	return *this;
}
ostream& operator<<(ostream& os, const timer& t)
{
	os << t.h << ":" << t.m << ":" << t.s;
	return os;
}

bool timer::operator<(timer& t)
{
	return((t.turnToSeconds() - turnToSeconds()) >= 0);
}

double timer::operator-(timer& t)
{
	cout << "Zaostaje : ";
	return(t.turnToSeconds() - turnToSeconds());
}
