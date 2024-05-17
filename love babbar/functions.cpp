#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int N(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return (n * N(n - 1));
    }
}

int main()
{
    cout << "enter a n : ";
    int n;
    cin >> n;
    int num = N(n);
    cout << "enter the r: ";
    int r;
    cin >> r;

    int den = N(r);
    cout << "\nthe answer is: " << num / (den * N(n - r)) << endl;
    return 0;
}