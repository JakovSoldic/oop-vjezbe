#pragma once
#ifndef TIMER_H
#define TIMER_H
#include <iostream>

class timer
{
private:
	int h;
	int m;
	double s;
	friend class penalty;
public:
	timer(int x, int y, double z);
	timer();
	double turnToSeconds();
	timer operator+=(timer& t);
	timer operator/=(size_t a);
	bool operator<(timer& t);
	double operator-(timer& t);
	friend std::ostream& operator<<(std::ostream& os, const timer& t);
};
#endif
