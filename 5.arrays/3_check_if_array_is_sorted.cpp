#include <iostream>

#include <bits/stdc++.h>
/*check if the array given is sorted or not:
arr[] = {1,2,3,4,5} return true.
arr[] = {5,3,7,1,2};

even descending order is false
*/
using namespace std;

bool check_sorted()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n == 1)
        return true;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                return false;
            }
        }

        return true;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cout << boolalpha << check_sorted() << endl;
    }

    return 0;
}