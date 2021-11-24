#include <iostream>
#include "Target.h"
using namespace std;

void Target::setUpperX(int upperX)
{
	this->upperX = upperX;
	cout << "upperX :" << upperX << endl;
}

void Target::setUpperY(int upperY)
{
	this->upperY = upperY;
	cout << "upperY :" << upperY << endl;
}

void Target::setLowerX(int lowerX)
{
	this->lowerX = lowerX;
	cout << "lowerX :" << lowerX << endl;
}

void Target::setLowerY(int lowerY)
{
	this->lowerY = lowerY;
	cout << "lowerY :" << lowerY << endl;
}

bool Target::surfaceArea(int spaceX, int spaceY, Target& b)
{
	return (spaceX < b.upperX && spaceX > b.lowerX && spaceY < b.upperY && spaceY > b.lowerY);
}