#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "not sorted" << endl;
            exit(0);
        }
    }
    cout << "sorted" << endl;
}

int main()
{

    // check if the array is sorted or not
    int array[] = {1, 3, 11};
    solve(array, size(array));
    return 0;
}