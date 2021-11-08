#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void stringReverse(vector<string>& mv, string& input)
{
	string temp;
	cout << "Enter string ('1' to exit) : ";
	input = "Nesto";
	while (input != "1")
	{
		getline(cin, input);
		temp = input;
		reverse(temp.begin(), temp.end());
		mv.push_back(temp);
	}
	sort(mv.begin(), mv.end());
}

void printVector(vector<string> mv)
{
	for (int i = 0; i < mv.size(); i++)
	{
		cout << mv[i];
	}
}

int main()
{
	int i, n;
	vector<string> mv;
	string input;

	stringReverse(mv, input);
	printVector(mv);

	return 0;
}

