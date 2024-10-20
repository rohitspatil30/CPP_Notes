/*
anagram is that whether a string is permutation of other
example : rohit hitor are anagrams
2) listen silent are anagrams
 ----> hit tis are not anagrams

*/

// write a function that returns true if anagram and false itf not.

#include <iostream>

#include <bits/stdc++.h>

using namespace std;

bool anagram(string s, string s1)
{

    // naive method O(nlogn);
    // sort(s.begin(), s.end());
    // sort(s1.begin(), s1.end());
    // return(s==s1);

    // maps: O(n);
    if (s.size() != s1.size())
        return false;

    map<char, int> m1;
    map<char, int> m2;
    for (int i = 0; i < s.size(); i++)
    {
        m1[s[i]]++;
        m2[s1[i]]++;
    }
    return (m1 == m2);
}

int main()
{

    // ==============solved by cph==================
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string s1;
        cin >> s >> s1;
        cout << boolalpha << anagram(s, s1) << endl;
    }

    return 0;
}