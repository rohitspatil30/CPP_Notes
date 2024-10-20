/*
Problem
Read problem statements in Hindi,Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
As usual, I went to work in the morning. Unfortunately, I found out that my manager bought a new machine and I have to learn to operate it.

There are
�
N boxes in a line (numbered
1
1 through
�
N). Initially, the boxes are empty, and I need to use the machine to put tokens in them. For each valid
�
i, the
�
i-th box has a maximum capacity
�
�
S
i
​
  tokens. I can perform the following operation any number of times: choose an integer
�
L (
1
≤
�
≤
�
1≤L≤N) and put one token in each of the boxes
1
,
2
,
…
,
�
1,2,…,L.

My manager told me to put as many tokens as possible into the boxes in total (the distribution of tokens in the boxes does not matter). Of course, it is not allowed to perform an operation that would result in the number of tokens in some box exceeding its capacity. Can you help me calculate the maximum number of tokens that can be put in these boxes?

Input
*/
#include <iostream>
#include <bits/stdc++.h>

#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll mincap = INT_MAX;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        mincap = min(mincap, arr[i]);
        ans += mincap;
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
