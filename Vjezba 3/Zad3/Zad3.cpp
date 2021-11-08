#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int temp = 0, i;
	vector<int> mv{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

	sort(mv.begin(), mv.end());

	for (i = 0; i < mv.size(); i++)
		temp = temp + mv[i];

	mv.insert(mv.begin(), 0);
	mv.insert(mv.end(), temp);

	for (i = 0; i < mv.size(); i++)
	{
		cout << mv[i] << " ";
	}

	return 0;
}

