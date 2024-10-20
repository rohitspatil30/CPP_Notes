#include <iostream>

using namespace std;

void pivotarr(int arr[], int size, int pivot)
{
}
int main()
{

    int pivot, size;
    cout << "enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "enter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter number of elements to be pivoted : ";
    cin >> pivot;
    pivotarr(arr, size, pivot);
}