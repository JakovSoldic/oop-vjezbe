#ifndef TARGET_H
#define TARGET
#include <iostream>
using namespace std;

class Target
{
private:
    int upperX;
    int upperY;
    int lowerX;
    int lowerY;

public:
    void setUpperX(int upperX);
    void setUpperY(int upperY);
    void setLowerX(int lowerX);
    void setLowerY(int lowerY);
    bool surfaceArea(int spaceX, int spaceY);
};
#endif