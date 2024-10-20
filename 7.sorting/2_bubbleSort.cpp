/*
O(n^2)

with every pass the largest elements get to last position - i
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int arr[] = {7, 6, 2, 0, 1, 5, 4};
    // bubble sort:

    for (int i = 0; i < std::size(arr) - 1; i++)
    {
        for (int j = 0; j < std::size(arr) - i - 1; j++)
        {
            if (arr[j] > /* < for sorting in decreasing order */ arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }

    // O(n^2)
    // stable sort
}