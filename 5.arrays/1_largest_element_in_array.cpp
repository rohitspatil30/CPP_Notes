#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int return_smallest(int n)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] <= smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int return_largest(int n)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << return_smallest(n) << endl;
        cout << return_largest(n) << endl;
    }

    return 0;
}