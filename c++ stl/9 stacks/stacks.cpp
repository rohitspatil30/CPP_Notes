#include <iostream>
#include <stack>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // stack  : LIFO , LINEAR,
    stack<int> s;
    s.push(23);
    s.push(12);
    s.push(50);
    while (!s.empty())
    {
        cout << "the size of the stack is : " << s.size() << endl;
        cout << "the top elements is  :<<s.top()"
             << "\n-------------------------\n"
             << endl;
        s.pop();
        // the stack does not have a s.full command as the stack is implemented using the linked list and not array.
    }

    // print(s); we cannot traverse through the stack without popping the top element.

    // ------------------------

    return 0;
}