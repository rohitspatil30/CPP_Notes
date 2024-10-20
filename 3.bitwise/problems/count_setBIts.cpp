#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int n;
    cout << "enter the number : " << endl;
    cin >> n;

    // method 1:
    // std::vector<int> binary;
    // while (n != 0)
    // {
    //     binary.push_back(n % 2);
    //     n /= 2;
    // }
    // cout << std::count(binary.begin(), binary.end(), 1) << endl;

    // method 2:
    // int cnt = 0;
    // while (n != 0)
    // {
    //     if (n % 2 == 1)
    //     {
    //         cnt++;
    //     }
    //     n /= 2;
    // }
    // cout << cnt << endl;

    // method 3:
    // int cnt = 0;
    // while (n != 0)
    // {
    //     if (n & 1)
    //     {
    //         cnt++;  //101
    //     }           //001 --->1
    //     n /= 2;
    // }
    // cout << cnt << endl;

    // method 4:
    // int cnt = 0;
    // while (n != 0)
    // {
    //     cnt = cnt + (n & 1);
    //     n = (n >> 1); //  n/2
    // }
    // cout << cnt << endl;

    // all the algorithm above will take only O(32/64);

    // brian curningam algorithm: O (bit numbersize)

    // idea: and operator with subraction of one:
    /*
    if we subract a binary number from its previous bit then its leftmost is turned off with and operator:

    example:
    5 & 4 = 101 & 100 or after doing and 101 & 100 ----> 100
    4 & 3 = 100 & 011 =000 //0

    or
    */
    // cout << (4 & 3) << endl;
    int cnt = 0;
    while (n != 0)
    {
        n = (n & (n - 1));
        cnt++;
    }
    cout << cnt << endl;

    // or using look up table:

    /*
    // C++ program to Count set
    // bits in an integer
    #include <bits/stdc++.h>
    using namespace std;

    int table[256];

    // recursive function to count set bits
    void initialize() {

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
    }

    int countSetBits(int n)
    {
        return table[n & 0xff] +
        table[(n >> 8) & 0xff] +
        table[(n >> 16) & 0xff] +
        table[n >> 24];
    }

 // Program to test function countSetBits
    int main()
    {
            initialize();
            int n = 9;
        cout << countSetBits(n);
        return 0;
    }

        */
}