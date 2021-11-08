#ifndef MYVECTOR_H
#define MYVECTOR_H
#include <iostream>
#include <vector>
using namespace std;

class myVector
{
    vector<int> v;

public:
    void vectorEnter1(myVector& mv, int n);
    void vectorEnter2(myVector& mv2, int lower, int upper);
    void print_vector(myVector& mv1);
};
#endif