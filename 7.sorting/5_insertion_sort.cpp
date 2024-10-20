/*

this is the sorting techniques which focuses on shifting the elements from unsorted part of the array to the sorted part of the array thet is there will two parts unsorted part and the sorted part the element at the zeroth index is included in the sorted part and the rest of the array is kept in the unsorted part so, in the first iteration when the first element from the unsorted array is compared with the element in the sorted array its value decides its position in the array that is before or after the preincluded element ,like wise the second element in the unsorted element will be compared with both the sorted elements and it's position would be decided accordingly, this will be continued until all the elements from the unsorted array are tranferd to the sorted array will proper sequence of increasing number values.this completes the insertion sort process.



best case : O(n);
worst case : O(n^2);

in place sort and stable
*/

#include <iostream>
using namespace std;

// void insertsort(int arr[], int size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// using while loop

void insertsort(int arr[], int size)
{
    int temp;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "enter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insertsort(arr, size);
}
