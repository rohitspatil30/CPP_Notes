#include <iostream>

using namespace std;

int sendduplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size;
    int arr[]{9, 2, 3, 4, 4};
    size = sizeof(arr) / sizeof(arr[0]);
    cout << "the duplicate number is: " << sendduplicate(arr, size);
}