#include <iostream>
using namespace std;

int& getValue(int a[], int j)
{
	return a[j];
}

int main()
{
	int i;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Array : " << endl;
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	getValue(a, 5) += 1;
	cout << endl << "Modified array : " << endl;
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
