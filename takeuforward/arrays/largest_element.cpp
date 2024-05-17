#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest << endl;
}

int main()
{

    // find the largest element of array
    int array[] = {1, 3, 2, 5, 4, 6, 8, 9, 1, 4, 0, 5, 3, 11};
    solve(array, size(array));
    return 0;
}