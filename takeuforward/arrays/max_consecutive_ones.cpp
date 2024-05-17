#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int count = 0;
    int largest_count = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            // cout << "count : " << count << endl;
        }
        else if (arr[i] == 0)
        {
            if (count > largest_count)
            {
                largest_count = count;
            }
            count = 0;
        }
    }
    cout << largest_count << endl;
}

int main()
{

    // find the largest element of array
    int array[] = {1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0};
    solve(array, size(array));
    return 0;
}