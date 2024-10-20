/*
what is  dynamic programming ?



the problem shoud be recursive to apply dp.
and it should have overlapping subproblems

if this happens then we should use storage to solve recursion

*/
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

/*
int fibo(int n)
{
    // this is regular :
    //  if (n == 0 || n == 1)
    //  {
    //      return n;
    //  }
    //  else
    //  {
    //      return (fibo(n - 1) + fibo(n - 2));
    //  }

    // optimized : top down approach
    array<int, 62> arr = {0, 1};
    arr.fill(-1);
    arr[0] = 0;
    arr[1] = 1;

    if (n == 0 || n == 1)
    {
        return n;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }
    arr[n] = fibo(n - 1) + fibo(n - 2);
    return arr[n];
}
*/

int main()
{

    // cout << fibo(7) << endl;

    // staircase problem : imp
    /*
    you have a staircase ground is zero and every step the count increases.
    give the number of ways needed to reach nth step

    ex : 1 : 1 way
        2 : 2 ways : 1,1 and 2 directly

    framework :
    1) find the recursive functionn definition and write down exactly what it returns : returntype, funtionname, argument to this function

    2) to find what are the choices we have for solving problem.

    1) int staricase (int n ){
        //this will return me the numberof ways we can reach nth stair

        // to reach nth stair i can either come from n-1 level or n-2 level
    }

    =====================================================
    static int noways(int n)
    {
        if(n<3)
            return n;
        return noways(n-2)+noways(n-1);
    }


    */

    return 0;
}