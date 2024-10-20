/*
leftmost occurance of the first repeating number

accba --> here cc is the first letter which got repeated but a is also repeated later and is the leftmost letter in the string which got repeated so the answer should be 0;


write a fucntion that return the index of the leftmost repeating character and -1 if no character is repaeting .

logic :

we will store the characters and there indexes in the map
for the first for loop and then in the  second for loop we will just see of the value set is having only one number in it then it is not repeating but if is  repeating then we will return the first index of the set.

*/
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int lmr(string s)
{

    // naive method is to use 2 for loops where  one for getting to a character and another the nested one to check if th\at character is ever repeated in the  futuer , time : O(n^2);
    //  second approach is to use 2 for different for loops ont for storing the index and another to see if the index is greater than 1 then reutrn the index ;

    map<char, pair<int, int>> m;
    int smallest = INT_MAX;
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]].second > 0)
        {
            if (m[s[i]].first < smallest)
            {
                smallest = m[s[i]].first;
            }
        }

        else
        {
            m[s[i]].first = i;
            m[s[i]].second = 1;
        }
    }
    if (smallest == INT_MAX)
        return -1;
    else
        return smallest;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << lmr(s) << endl;
    }
    return 0;
}