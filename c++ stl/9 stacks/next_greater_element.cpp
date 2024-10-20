#include <iostream>

#include <bits/stdc++.h>

using namespace std;

// find the next greater element to 4 5 2 25 7 -> 5 25 25 -1
/*
simple : create a stack , a number which is first then push else check if the number is greater than numbers at top then replace that number else push it directly

*/

int main()
{

    cout << "Enter how many numbers you want for array " << endl;
    vector<int> v;
    stack<int> s;
    int n;
    cin >> n;
    cout << "Enter the number for the array : " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int j = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (s.empty())
        {
            s.push(v.at(i));
        }
        else
        {
            if (v.at(i) > s.top())
            {
                s.pop();
                arr[j] = v.at(i);
            }
            else
            {
                s.push(v.at(i));
            }
            j++;
        }
    }
    for (auto i : v)
        cout << i << " ";
    cout << "\n"
         << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}