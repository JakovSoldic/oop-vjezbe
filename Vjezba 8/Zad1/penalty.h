#pragma once
#ifndef PENALTY_H
#define PENALTY_H
#include <iostream>

class penalty
{
private:
	double penalty_sec;
public:
	penalty(int x) : penalty_sec(x) {};
	double operator()(timer& t) 
	{ 
		if ((t.s + penalty_sec) >= 60)
		{
			double remaining_sec = 60 - t.s;
			t.m += 1;
			t.s = 0;
			return t.s = t.s + remaining_sec;
		}
		else
			return t.s = t.s + penalty_sec;
	}
};
#endif