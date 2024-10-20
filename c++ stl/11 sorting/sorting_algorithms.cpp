#include <iostream>

#include <bits/stdc++.h>

#define fora \
    for (int i = 0; i < n; i++)

using namespace std;

int main()
{

    int arr[8] = {5, 4, 3, 2, 8, 6, 0, 2};
    int n = 8;
    sort(arr /*you can add +5 to set the pointer from you want to start and stop the array.*/, arr + n);

    fora
    {
        cout << arr[i] << " ";
    }
    cout << "\n"
         << flush;
    /*
    this is called as intro sort :
    mixture of 3 sorting algortihm :
    1) qucik sort :usually
    2) when the stack ins getting full by lots of recursion calls then thesorting algort=ithm switches to the heap sort
    3)when there are very less elements in the arrays then the mixture algo uses the insertion sort for sorting the array

    */

    // sorting in descending order :

    sort(arr, arr + n, greater<int>());
    fora
    {
        cout << arr[i] << " ";
    }
    return 0;
}