#include <iostream>
#include "Target.h"
using namespace std;

void Target::setUpperX(int upperX)
{
	this->upperX = upperX;
}

void Target::setUpperY(int upperY)
{
	this->upperY = upperY;
}

void Target::setLowerX(int lowerX)
{
	this->lowerX = lowerX;
}

void Target::setLowerY(int lowerY)
{
	this->lowerY = lowerY;
}

bool Target::surfaceArea(int spaceX, int spaceY)
{
	if ((spaceX > upperX) && (spaceX < lowerX) && (spaceY > upperY) && (spaceY < lowerY))
		return true;
	return false;
}