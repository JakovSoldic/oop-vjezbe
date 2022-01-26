#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

template <class S>
void Stack<S>::push(S a)
{
    if (lastOneIn == 10)
    {
        cout << "Stack is full";
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "Added " << a << endl;
        lastOneIn += 1;
        sizeLimit[lastOneIn] = a;
    }
}

template <class S>
int Stack<S>::pop()
{
    if (lastOneIn == -1)
    {
        cout << "Stack is empty";
        exit(EXIT_FAILURE);
    }
    else
    {
        int remove_element = sizeLimit[lastOneIn];
        lastOneIn -= 1;
        return remove_element;
    }
}

template <class S> 
int Stack<S>::topElementInStack()
{
    int temp = sizeLimit[lastOneIn];

    return temp;
}