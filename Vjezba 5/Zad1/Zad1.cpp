#include <iostream>
#include "Coordinate.h"
using namespace std;

int main()
{

    Coords a, b;
    
    double lower, upper;
    cout << "Enter lower limit :" << endl;
    cin >> lower;

    cout << "Enter upper limit :" << endl;
    cin >> upper;

    a.setValueX(10);
    a.setValueY(20);
    a.setValueZ(30);

    cout << "X :" << a.returnX() << endl;
    cout << "Y :" << a.returnY() << endl;
    cout << "Z :" << a.returnZ() << endl;
    
    cout << "2D distance :" << a.distance2D(b, lower, upper) << endl;
    cout << "3D distance :" << a.distance3D(b, lower, upper) << endl;


    return 0;
}