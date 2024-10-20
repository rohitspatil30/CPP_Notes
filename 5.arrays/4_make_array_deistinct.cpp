#include <iostream>

#include <bits/stdc++.h>

using namespace std;

/*making array distcinct meanyouo have to remove the duplicates from the array and print the array with all the elements distinct ,
exmple :  10 20 30 30 40 40 40 ---> 10 20 30 40
*/

void make_distinct()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        make_distinct();
    }

    return 0;
}