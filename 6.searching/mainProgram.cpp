#include <iostream>

using namespace std;
int binarySearch(int, int);

void sorting(int arr[], int size)
{
    int ans;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
            else
            {
                continue;
            }
        }
    }
    cout << "the sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int binarySearch(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    int key;
    cout << "\nenter the number you want to find : ";
    cin >> key;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "enter the values for the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sorting(arr, size);
    int ans = binarySearch(arr, size);
    cout << ans << endl;
    return 0;
}