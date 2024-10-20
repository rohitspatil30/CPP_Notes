/*

stack is the linear data structure where the LIFO principal is followed for the operations on the top only , like insertion on the top and deletion too on the top only .

they can be implemented in two ways :
1) using stack
2) using linked list

*/
// stack implementaiton using vector :
#include <bits/stdc++.h>
using namespace std;

struct MyStack
{
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }

    int peek()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}
