#include "stack.h"
#include <iostream>

using namespace std;

Stack:: Stack()
{
    my_stack=new int[ssize];
    for(int i=0; i<ssize; i++)
    {
        my_stack[i] = 0;
    }
}
void Stack:: push(int elem)
{
    ssize += 1;
    int *new_stack = new int[ssize];
    for (int i = 0; i < ssize-1; ++i)
    new_stack[i] = my_stack[i];
    delete[] my_stack;
    my_stack = new int[ssize];
    for (int i=0; i<ssize-1; ++i)
    {
       my_stack[i] = new_stack[i];
    }
    my_stack[ssize-1] = elem;
    delete[] new_stack;
}
int Stack:: pop()
{
    int top = my_stack[ssize-1];
    ssize -= 1;
    int *new_stack = new int[ssize];
    for (int i = 0; i < ssize; ++i)
    new_stack[i] = my_stack[i];
    delete[] my_stack;
    my_stack = new int[ssize];
    for (int i=0; i<ssize; ++i)
    {
       my_stack[i] = new_stack[i];
    }
    delete[] new_stack;
    return top;
}
bool Stack:: isEmpty()
{
    return my_stack[ssize-1] ? false : true;
}
void Stack:: multiPop(int N)
{
    ssize = ssize - N;
    int* new_stack = new int[ssize];
    for (int j = 0; j < ssize; ++j)
    {
        new_stack[j] = my_stack[j];
    }
    delete[] my_stack;
    my_stack = new int[ssize];
    for (int k = 0; k < ssize; ++k)
    {
        my_stack[k] = new_stack[k];
    }
    delete [] new_stack;
}
void Stack:: show()
{
    for (int i=0; i<ssize; ++i)
    {
        if (i != ssize-1){cout << my_stack[i] << " ";} else
        {cout << my_stack[i];}
    }
    cout << endl;
}
Stack:: Stack(const Stack& sstack)
{
        ssize = sstack.ssize;
        my_stack = new int[ssize];
        for (int i = 0; i<ssize; ++i)
        {
            my_stack[i] = sstack.my_stack[i];
        }
}
Stack& Stack:: operator=(const Stack& sstack)
{
    ssize = sstack.ssize;
    my_stack = new int[ssize];
    for (int i=0; i<ssize; ++i)
    {
        my_stack[i] = sstack.my_stack[i];
    }
    return *this;
}
Stack:: ~Stack()
{
    delete[] my_stack;
}
