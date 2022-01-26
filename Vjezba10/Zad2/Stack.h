#pragma once
#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
using namespace std;

template <class S>
class Stack
{
private:
	int sizeLimit[10];
	int lastOneIn = -1;
public:
	void push(S a);
	int pop();
	int topElementInStack();
};
#endif