#include <iostream>
using namespace std;

void minmax(int a[], int n, int* min, int* max)
{
    int i;
    *max = a[0];
    for (i = 0; i < n; i++)
    {
        if (*max < a[i])
            *max = a[i];
    }
    *min = a[0];
    for (i = 0; i < n; i++)
    {
        if (*min > a[i])
            *min = a[i];
    }
}

int main()
{
    int a[10], n, i, min, max;
    cout << "Velicina niza : ";
    cin >> n;
    cout << "Unesi brojeve niza : ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    minmax(a, n, &min, &max);
    cout << "MAX ELEMENT : " << max << endl << "MIN ELEMENT : " << min << endl;
    return 0;
}


/*
int najveci(int a[], int n)
{
    int max, i;
    max = a[0];
    for (i = 0; i < n; i++)
        {
        if (max < a[i])
                max = a[i];
        }
    return max;
}

int najmanji(int a[], int n)
{
    int min, i;
    min = a[0];
    for (i = 0; i < n; i++)
        {
        if (min > a[i])
                min = a[i]; 
        }
    return min;
}

int main()
{
    int a[10], n, i, max, min;
    cout << "Velicina niza : ";
    cin >> n;
    cout << "Unesi brojeve niza : ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "MAX ELEMENT : " << najveci(a, n) << endl;
    cout << "MIN ELEMENT : " << najmanji(a, n) << endl;
    return 0;
}*/


