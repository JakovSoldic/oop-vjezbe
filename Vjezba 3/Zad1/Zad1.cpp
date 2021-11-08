#include <iostream>
#include <vector>
#include "myVector.h"
using namespace std;

int main()
{
    myVector mv;
    myVector mv2;
    int n = 5, lower, upper;
    cout << "Enter number of elements : " << endl;
    cin >> n;

    cout << "Enter lower limit :" << endl;
    cin >> lower;

    cout << "Enter upper limit :" << endl;
    cin >> upper;

    mv.vectorEnter1(mv, n);
    mv2.vectorEnter2(mv2, lower, upper);


    cout << "First vector : " << endl;
    mv.print_vector(mv);

    cout << endl << "Second vector : " << endl;
    mv2.print_vector(mv2);

}
