#include <iostream>
using namespace std;

void minmax(int n, int* a, int& min, int& max)
{
	int j;
	min = a[0];
	max = a[0];
	for (j = 0; j < n; j++)
	{
		if (a[j] > max)
		{
			max = a[j];
		}

		if (a[j] < min)
		{
			min = a[j];
		}
	}
}

int main()
{
	int i, n, min, max;
	cout << "Lenght of array : ";
	cin >> n;
	int* a = new int[n];
	cout << "Input ellements of array : ";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	minmax(n, a, min, max);
	cout << "MIN : " << min << endl << "MAX : " << max << endl;
	return 0;
}





