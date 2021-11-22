#include <iostream>
#include <math.h>
#include "Coordinate.h"
using namespace std;

void Coords::setValueX(double x)
{
	this->x = x;
}

void Coords::setValueY(double y)
{
	this->y = y;
}

void Coords::setValueZ(double z)
{
	this->z = z;
}

double Coords::randomX(double lower, double upper)
{
	return x = (rand() / (RAND_MAX / (upper - lower))) + lower;
}

double Coords::randomY(double lower, double upper)
{
	return y = (rand() / (RAND_MAX / (upper - lower))) + lower;
}

double Coords::randomZ(double lower, double upper)
{
	return z = (rand() / (RAND_MAX / (upper - lower))) + lower;
}

double Coords::returnX()
{
	return x;
}

double Coords::returnY()
{
	return y;
}

double Coords::returnZ()
{
	return z;
}

double Coords::distance2D(Coords b, double lower, double upper)
{
	return sqrt(pow((b.randomX(lower, upper) - x), 2) + pow((b.randomY(lower, upper) - y), 2));
}

double Coords::distance3D(Coords b, double lower, double upper)
{
	return sqrt(pow((b.randomX(lower, upper) - x), 2) + pow((b.randomX(lower, upper) - y), 2) + pow((b.randomX(lower, upper) - z), 2));
}