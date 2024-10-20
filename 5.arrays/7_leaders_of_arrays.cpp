/*
a leader is the element which is taller than all the elements st its right , the element should be strictly greater than the elements the same elements would not be counted ,

example : 10 20 30 ---> only 30 is the leader
30 20 10 --> all are leaders :

logic you have to keep the track of the current highest element: and pribnt it as soon as the elelmtnt is found to be the lagrest , but this will just print the elements in reverse order the extra auxilary space of the extra array will solve the problem of reverse printing

*/
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

#define input                   \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define output                  \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << " ";

void leaders()
{
    int n;
    cin >> n;
    int arr[n];
    int arr_aux[n];
    int largest;
    int count = 0;
    input
        largest = arr[n - 1];
    cout << largest << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        leaders();
    }

    return 0;
}