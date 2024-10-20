/*

search if the pattern is present and at how many places basially a substring occurance at its indexes

*/
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void search(string s, string p)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << "hello" << endl;
    }
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     string s;
    //     string p;
    //     cin >> s >> p;
    //     string sample = "rohitrohitrohit";
    //     string sampa = "rohit";
    //     for (int i = 0; i < sample.size(); i++)
    //     {
    //         int pos = sample.find(sampa);
    //         sample.erase(sample.begin() + pos, sample.begin() + pos + sampa.size());
    //         cout << pos << " ";
    //     }

    //     // search(s,p);
    // }

    string s = "rohit";
    s.erase(s.begin() + 1, s.begin() + 4);
    cout << s << endl;

    return 0;
}