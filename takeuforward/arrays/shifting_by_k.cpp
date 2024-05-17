#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n, int k)
{
    // simplt create a array
    // simply just print k to n-1 and then print 1 to k-1
    // or reverse till k then reverse k, n-1 then entire array reverse

    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // shift by k
    int array[] = {1, 3, 2, 5, 4, 6, 8, 9, 1, 4, 0, 5, 3, 11};
    solve(array, size(array), 5);
    return 0;
}