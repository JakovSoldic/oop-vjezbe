#include "myVector.h"
#include <iostream>
#include <vector>
using namespace std;

void myVector::vectorEnter1(myVector& mv, int n)
{
    int i = 0, m;
    cout << "Enter " << n << " vector elements : " << endl;
    while (i < n)
    {
        cin >> m;
        mv.v.push_back(m);
        i++;
    }
}

void myVector::vectorEnter2(myVector& mv2, int lower, int upper)
{
    int i = lower;
    cout << "Enter vector2 elements between " << lower << " and " << upper << endl;
    while (i >= lower && i <= upper)
    {
        cin >> i;
        if (i >= lower && i <= upper)
        {
            mv2.v.push_back(i);
        }
    }
    cout << "Entered number beyond the two intervals - Stopped" << endl;
}

void myVector::print_vector(myVector& mv)
{
    for (auto i : mv.v)
        cout << i << ' ';
}