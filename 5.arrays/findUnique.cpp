#include <iostream>

using namespace std;

int checkUnique(int arr[], int size)
{
    // int i;
    // int duplicate;
    // for (i = 0; i < size - 1; i++)
    // {
    //     duplicate = 0;
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             duplicate += 1;
    //         }
    //         else
    //         {
    //             continue;
    //         }
    //     }
    //     if (duplicate == 1)
    //     {
    //         return i;
    //     }
    // }
    // return i;
    // ===================================
    // optimise
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    int arr[]{1, 3, 1, 6, 3, 4, 6, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = checkUnique(arr, size);
    cout << "the unique element is " << arr[ans] << " present at index  " << ans << endl;
}