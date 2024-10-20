
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int lmnr(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]] /*>1 then return i for lmr*/ == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << lmnr(s) << endl;
    }
    return 0;
}