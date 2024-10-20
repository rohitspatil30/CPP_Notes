/*
write a code which gives a get_min function as an extra functionin the stack , creating a special stack with the functions.

*/

#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int get_min(stack<int> s1, stack<int> s2)
{
    return s2.top();
}

void push(stack<int> s1, stack<int> s2, int x)
{
    s1.push(x);
    if (s2.empty())
    {
        s2.push(x);
    }
    else
    {
        if (x < s2.top())
        {
            s2.push(x);
        }
        if (x > s2.top())
        {
            s2.push(s2.top());
        }
    }
}

void pop(stack<int> s1, stack<int> s2)
{
    s1.pop();
    s2.pop();
}

int main()
{

    stack<int> s1;
    stack<int> s2;

    push(s1, s2, 5);
    push(s1, s2, 2);
    cout << get_min(s1, s2) << endl;

    return 0;
}