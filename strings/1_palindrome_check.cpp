#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "Enter the string : ";
    string s;
    cin >> s;
    string s2 = s;
    // O(n) time only
    // for (int i = 0; i <= s.size() / 2; i++)
    // {
    //     if (s[i] != s[s.size() - 1 - i])
    //     {
    //         cout << "Not a palindrome" << endl;
    //         exit(0);
    //     }
    // }
    // cout << "It is a palindrome " << endl;

    // another way: time : O(n) space : O(length of string)
    reverse(s.begin(), s.end());
    if (s == s2)
        cout << "palindrome " << endl;
    else
        cout << "not a palindrome" << endl;

    return 0;
}