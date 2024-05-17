#include <iostream>

#include <bits/stdc++.h>

using namespace std;

// better approach : O (2*n)
//  void second(int arr[], int n, int largest)
//  {
//      int second_largest = INT_MIN;
//      for (int i = 0; i < n; i++)
//      {
//          if (arr[i] == largest)
//          {
//              continue;
//          }
//          if (arr[i] > second_largest)
//          {
//              second_largest = arr[i];
//          }
//      }
//      cout << second_largest << endl;
//  }

// void solve(int arr[], int n)
// {
//     int largest = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }
//     second(arr, n, largest);
// }
// ------------------------------------------------

void solve(int arr[], int n)
{

    int largest = arr[0];
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
                }
        if (arr[i] < largest)
        {
            if (arr[i] > second_largest)
            {
                second_largest = arr[i];
            }
        }
    }
    cout << second_largest << endl;
}

int main()
{

    // find the largest element of array
    int array[] = {1, 39, 2, 5, 4, 6, 8, 9, 1, 4, 0, 5, 30, 11};
    solve(array, size(array));
    return 0;
}