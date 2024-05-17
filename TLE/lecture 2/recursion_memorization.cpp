/*
dp and recursion.

memorization is the extension of dp technique:

*/
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void basic_recursion_to_print_1_to_n(int n)
{

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        basic_recursion_to_print_1_to_n(n - 1);
        cout << n << endl;
    }
}

void basic_recursion_to_print_n_to_1(int n)
{

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        cout << n << endl;
        basic_recursion_to_print_n_to_1(n - 1);
    }
}

int fact(int n, int acc)
{

    // with tail recursion, where we use the acc variable to store the anser of that call as we move to the end.and at end we will return wahtever is calculated.

    // if (n <= 1)
    //     return acc;
    // else
    //     return fact(n - 1, n * acc);

    // non tail:
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1, 0);
}

void string_palin(string s, int n, int i = 0)
{
    // for (int i = 0; i <= n / 2; i++)
    // {
    //     if (s[i] != s[n - 1 - i])
    //     {
    //         cout << "no" << endl;
    //         exit(0);
    //     }
    // }
    // cout << "yes" << endl;

    // using recursion
    if (i > n / 2)
    {
        cout << "yes" << endl;
    }
    else
    {
        if (s[i] != s[n - i - 1])
        {
            cout << "no" << endl;
            return;
        }
        string_palin(s, n, i + 1);
    }
}

int ls(int arr[], int n, int key, int i = 0)
{
    if (i == n)
    {
        cout << "not found " << endl;
        return -1;
    }
    else
    {
        if (arr[i] == key)
        {
            cout << "found" << endl;
            return i;
        }
        else
        {
            ls(arr, n, key, i + 1);
        }
    }
}

int main()
{

    // int n;
    // cout << "Enter the last number  : ";
    // cin >> n;
    // basic_recursion_to_print_1_to_n(n);
    // cout << "\nnow printing n to 1" << endl;
    // basic_recursion_to_print_n_to_1(n);
    // cout << "\nnow the factorial of the same number is : " << fact(n, 1) << endl;

    // string palindrome :
    // string s;
    // cout << "enter a string : ";
    // cin >> s;
    // int n = s.size();
    // string_palin(s, n);

    // linear_search()
    int arr[]{2, 3, 1, 4, 56, 8, 0};
    int key = 56;
    cout << "index: " << ls(arr, size(arr), key);

    return 0;
}