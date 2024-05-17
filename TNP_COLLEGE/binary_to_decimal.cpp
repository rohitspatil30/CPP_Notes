#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{

    while (1)
    {
        cout << "enter a binary number: ";
        long long int n;
        cin >> n;
        vector<int> v;
        while (n > 0)
        {
            v.push_back(n % 10);
            n /= 10;
        }

        int number = 0;
        for (int i = 0; i < v.size(); i++)
        {
            number += (v[i] * pow(2, i));
        }
        cout << number << endl;
    }

    return 0;
}