#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void u(vector<int>& mv)
{
	int del, i;
	bool check = false;
	cout << "Enter element to remove : ";
	cin >> del;


	for (i = 0; i < mv.size(); i++)
	{
		if (mv[i] == del)
		{
			mv.erase(mv.begin() + i);
			break;
		}
		/*else
			cout << "Element not found : ";
			break;*/
	}
}

int main()
{
	int input, i = 0, n, j;
	vector<int> mv;

	cout << "Enter number of elements : ";
	cin >> n;

	cout << "Enter " << n << " elements of vector : ";
	while (i < n)
	{
		cin >> input;
		mv.push_back(input);
		i++;
	}

	u(mv);
	for (j = 0; j < mv.size(); j++)
	{
		cout << mv[j] << " ";
	}
	return 0;
}

