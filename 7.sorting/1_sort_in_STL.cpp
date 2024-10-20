#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 1, 9, 0, 5, 2};
    sort(arr, arr + size(arr));
    for (auto i : arr)
    {
        cout << i << " ";
    }

    printf("\n");

    // sorting in reverse:
    sort(arr, arr + size(arr), greater<int>());
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;

    // sorting is included in the algorithm library.
}