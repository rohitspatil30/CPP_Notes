#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
    for (auto i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    // shift array by one
    int array[] = {1, 3, 2, 5, 4, 6, 8, 9, 1, 4, 0, 5, 3, 11};
    solve(array, size(array));
    return 0;
}