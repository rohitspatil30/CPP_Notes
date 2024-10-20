/*
subsequence:
it is aset of caharcter picked up non continuos in sequence and order deleting atleast \0 character from the string

example : "rohit"

subsstrings : "",r,o,h,i,t,ro,oh,hi,it,roh,ohi,hit,rohi,ohit,rohit.

subseqence : 2^n : r,o,"",ro,rt,ot,rhi,ot,rhit.

but the sequence cannot be changed

*/

// write a program to see of the string is a subsequence of given string.

#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string parent;
    string sub;
    cout << "Enter the parent string : ";
    cin >> parent;
    cout << "enter the sub sequence you want to check : ";
    cin >> sub;
    int i = 0;
    int j = 0;
    while (j != sub.size())
    {
        if (i > parent.size())
        {
            cout << "not a subsequence" << endl;
            exit(0);
        }
        if (parent[i] == sub[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << "it is a subsequence!! " << endl;

    return 0;
    // in recursion we pass the length of the subsequence instead of the iterator and it is also slower coz it takes more time  for recursive class as well as spzce in stack.
}