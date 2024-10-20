#include <iostream>

using namespace std;
int count_ones(int arr[], int size)
{
    // method 1: O(n):
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 1)
    //     {
    //         return (size - i);
    //     }
    // }
    // return -1;

    // method 2:
    int low = 0;
    int high = size - 1;
    int mid;
    int result = -1;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == 1)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] > 1)
        {
            high = mid - 1;
        }
        else if (arr[mid] == 0)
        {
            low = mid + 1;
        }
    }
    return result;
}

int main()
{

    int arr[] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    if (count_ones(arr, size(arr)) == -1)
    {
        cout << "not present";
    }
    else
    {
        cout << "number of ones in the array is: " << size(arr) - count_ones(arr, size(arr)) << endl;
    }
}