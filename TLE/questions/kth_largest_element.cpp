

#include <iostream>

#include <bits/stdc++.h>

using namespace std;

class kthlargest
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
    kthlargest(int k, vector<int> &nums)
    {
        k = k;
        for (auto x : nums)
            pq.push(x);
    }

    int add(int val)
    {
        pq.push(val);
        while (pq.size() > k)
            pq.pop();
        return pq.top();
    }
};

int main()
{

    cout << "hello world" << endl;

    return 0;
}
