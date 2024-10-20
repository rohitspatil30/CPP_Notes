#include <iostream>

#include <bits/stdc++.h>

#include <queue>

using namespace std;

int main()
{

    queue<int> q;
    q.push(23); // push here means enqueue which is inserting from the back
    q.push(100);
    q.push(4564);
    q.push(0);
    cout << "the rear of the queue is :  " << q.back() << endl;
    cout << "the front  of the queue is :  " << q.front() << endl;
    // similar to queue we can not traverse the queue without traversing it : but here is the thing from where should we traverse in stack we only had top as the output point for representation. but in queue we have rear and front as queue follows FIFO principal that is first in first out the traversal should be done from the element which is inserted first and then the next coz the pop operation removes the front pointer and then only wew can move to next front.

    while (!q.empty())
    {
        // cout << "size : " << q.size() << endl;
        cout << q.front() << " ";
        q.pop();
    }

    cout << "\n\nsize" << q.size() << endl;

    return 0;
}