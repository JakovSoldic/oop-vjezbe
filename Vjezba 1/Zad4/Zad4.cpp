#include <iostream>
using namespace std;

int minmax(int* a, int* min, int* max, int n)
{
    if (n < 0)
    {
        return 1;
    }
    else if(a[n] > *max)
    {
        *max = a[n];
    }
    else if(a[n] < *min)
    {
        *min = a[n];
    }
    return minmax(a, min, max, n - 1);

}
int main()
{
    int a[10], n, i, min, max;
    max = -10000000;
    min = 10000000;
    max, max = a[0];
    cout << "Velicina niza : ";
    cin >> n;
    cout << "Unesi brojeve niza : ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    minmax(a, &min, &max, n - 1);
    cout << "MAX ELEMENT : " << max << endl << "MIN ELEMENT : " << min << endl;
    return 0;
}
/*
int najveci(int a[], int n)
{
    if (n == 0)
        return 1;
    return max(a[n - 1], najveci(a, n - 1));
}

int najmanji(int a[], int n)
{
    if (n == 0)
        return 1;
    return min(a[n - 1], najmanji(a, n - 1));
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

