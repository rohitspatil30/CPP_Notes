#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int xor1 = 0;
    for (int i = 0; i < n; i++)
        xor1 ^= arr[i];
    cout << xor1 << endl;
}

int main()
{

    // number which appears only once
    int array[] = {1, 1, 2, 2, 3, 4, 4}; // all the numbers are sorted
    solve(array, size(array));
    return 0;
}