#include <iostream>

using namespace std;

void funcswap(int arr[], int size)
{
    int i = 0;
    while (i <= (size / 2) + 1)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the values in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i <= size / 2; i = i + 2)
    // {
    //     swap(arr[i], arr[i + 1]);
    // }
    funcswap(arr, size);
}