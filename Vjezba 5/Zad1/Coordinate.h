#ifndef COORDINATE_H
#define COORDINATE
#include <iostream>
#include <vector>
using namespace std;

class Coords
{
private:    
    double x = 0;
    double y = 0;
    double z = 0;

public:
    void setValueX(double x);
    void setValueY(double y);
    void setValueZ(double z);
    
    double randomX(double lower, double upper);
    double randomY(double lower, double upper);
    double randomZ(double lower, double upper);

    double returnX();
    double returnY();
    double returnZ();

    double distance2D(Coords b, double lower, double upper);
    double distance3D(Coords b, double lower, double upper);
};
#endif