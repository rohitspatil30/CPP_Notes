#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    // make a temp array : or
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    // zeroes at end
    int array[] = {1, 3, 2, 5, 4, 0, 0, 0, 0, 4, 0, 5, 3, 11};
    solve(array, size(array));
    return 0;
}