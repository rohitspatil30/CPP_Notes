#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
            {
                cout << "*"
                     << " ";
            }
            else if (i + j == n - 1)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    int n = 5;
    print_pattern(n);

    return 0;
}