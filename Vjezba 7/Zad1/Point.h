#pragma once
#ifndef POIINT_H
#define POINT_H
#include <stdlib.h>
#include <iostream>

struct Point
{
	double cordX;
	double cordY;

	Point(int x, int y)
	{
		cordX = x;
		cordY = y;
	}
};
#endif