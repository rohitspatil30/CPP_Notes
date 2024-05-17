#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int N)
{
    // either double for loop
    // hashing
    // n(n+1)/2 --> total - array sum
    // or xor
    int xor1 = 0;
    int xor2 = 0;
    int n = N - 1;

    for (int i = 0; i < n; i++)
    {
        xor2 ^= arr[i];
        xor1 ^= i + 1;
    }
    xor1 ^= N;
    cout << (xor1 ^ xor2);
}

int main()
{

    // find the largest element of array
    int array[] = {1, 2, 3, 4, 6, 7};
    solve(array, size(array) + 1);
    return 0;
}