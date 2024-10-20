/*you task is to make the given array with 0 such that it makes all the zeroes at the end.

3 2 0 0 4 5 0 7 ----> 3 2 4 5 7 0 0 0
*/
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void zero_last()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        zero_last();
    }

    return 0;
}