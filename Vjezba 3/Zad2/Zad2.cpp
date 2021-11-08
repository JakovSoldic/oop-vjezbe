#include <iostream>
#include <vector>
using namespace std;

void fillVector(vector<int>& myVector1, int n)
{
    int i = 0, input;
    cout << "Enter " << n << " vector elements : " << endl;
    while (i < n)
    {
        cin >> input;
        myVector1.push_back(input);
        i++;
    }
}

void fillVector2(vector<int>& myVector2, int lower, int upper)
{
    int i = lower;
    cout << "Enter vector2 elements between " << lower << " and " << upper << endl;
    while (i >= lower && i <= upper)
    {
        cin >> i;
        if (i >= lower && i <= upper)
        {
            myVector2.push_back(i);
        }
    }
    cout << "Entered number beyond the two intervals - Stopped" << endl;
}

void newVector(vector<int>& myVector1, vector<int>& myVector2, vector<int>& myVector3)
{
    int i, j;
    for (i = 0; i < myVector1.size(); i++)
    {
        bool check = false;
        for (j = 0; j < myVector2.size(); j++)
        {
            if (myVector1[i] == myVector2[j])
            {
                check = true;
                break;
            }
        }
        if (check != true)
        {
            int temp = myVector1[i];
            myVector3.push_back(temp);
        }
    }

}

void printVector(vector<int> myVector3)
{
    for (int i = 0; i < myVector3.size(); i++)
    {
        cout << myVector3[i] << " ";
    }
}

int main()
{
    int n, lower, upper;
    vector<int> myVector1;
    vector<int> myVector2;
    vector<int> myVector3;

    cout << "Enter number of elements first vector : " << endl;
    cin >> n;

    cout << "Enter lower : " << endl;
    cin >> lower;
    cout << "Enter upper : " << endl;
    cin >> upper;

    fillVector(myVector1, n);
    fillVector2(myVector2, lower, upper);
    newVector(myVector1, myVector2, myVector3);
    printVector(myVector3);
    return 0;
}