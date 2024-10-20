#include <iostream>

using namespace std;

int main()
{
    int size;
    // int ans[size];
    cout << "enter the size of an array: ";
    cin >> size;
    int arr[size];
    cout << "enter the values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
    cout << "the reversed array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}