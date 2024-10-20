/*
print the freuencies of the sorted array

10 10 30 40 60 60 60 60

10 2
30 1
40 1
60 4


*/
#include <iostream>

#include <bits/stdc++.h>

#define input                   \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

using namespace std;

void print_fr()
{
    int n;
    cin >> n;
    int arr[n];
    input
        unordered_map<int, int>
            m;
    for (int i = n - 1; i >= 0; i--)
    {
        m[arr[i]]++;
    }
    for (auto i : m)
        cout << i.first << " " << i.second << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        print_fr();
    }

    return 0;
}