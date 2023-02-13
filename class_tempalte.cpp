#include<iostream>
using namespace std;
template <typename T>
class Stack
{
private:
    T data[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        data[++top] = x;
    }

    T pop()
    {
        return data[top--];
    }
};
