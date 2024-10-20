#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // the working of upper and lower bound needs a sorted array.
    // sort(arr, arr + 6);

    // for (auto i : arr)
    //     cout << i << " ";
    // cout << endl;

    // lower bound will find the exact number if present but if not then just greater than it will be given,

    // while upper bound will only give the greater number

    // they return location they return itertor

    // auto i = lower_bound(/*starting adress*/ arr, /*ending address*/ arr + 6, /*element to be found */ 3);
    // cout << i << endl;

    vector<int> v = {1, 2, 3, 4, 5, 6};
    // auto it = lower_bound(v.begin(), v.end(), 4);
    auto it = upper_bound(v.begin(), v.end(), 4);
    cout << *it << endl;

    map<int, int>
        m = {{1, 2}, {3, 5}};
    // MAP works in logn operation for 1 it should be sorted and then it should be stated in another way such as :
    // auto p = m.upper_bound(1);
    auto p = m.lower_bound(1); // same goes with set.
    cout << p->first << " " << p->second << endl;

    return 0;
}