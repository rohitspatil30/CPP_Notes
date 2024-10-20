/*
merge sort is a divide and conquer algorithm, it first divides the array into individual parts and thenits just sort the array by merging it agian,
it is a stable sorting algorithm ,
it takes O(nlogn ) time and O(n) auxillary space .
not a in place algorithm

block merge sort takes O(1) aux space .
we sort the array using the merge sort then merge sort is slower but then we use quick sort for the same , but for sorting the linked liast again the merge sprt is the better option .

well suited for the linked list the auxillary space is O(1).

used in many standard library used in timsort  = merge + quick used in the python library.

*/
// the working of the merge sort .

// the merge sort function (int arr, int low, int r)
// low = 0 and r = size -1
#include <iostream>

using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l) // to check if there is atleast 2 elements
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

int arr[] = {5, 6, 4, 7, 2, 9, 0, -1, -3, -4, -5, 10, 33};
    int n = size(arr);
    mergeSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
