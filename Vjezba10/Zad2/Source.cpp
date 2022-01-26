#include "Stack.h"
#include "Stack.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Stack <int> pushNum;
	
	pushNum.push(1);
	pushNum.push(2);
	pushNum.push(5);

	cout << pushNum.pop() << " is removed from stack" << endl;
	cout << pushNum.topElementInStack() << " is the last element in stack" << endl;
	cout << pushNum.pop() << " is removed from stack" << endl;
	cout << pushNum.pop() << " is removed from stack" << endl;
	cout << pushNum.pop() << " is removed from stack" << endl;
	return 0;
}