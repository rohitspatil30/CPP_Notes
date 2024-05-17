#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*

    notes :
    and &
    when both the bits are set then the answer is set
    1 1 -> 1
    1 0 -> 0
    0 1 -> 0
    0 0 -> 0
    example :  a= 5, b = 7
    5 - >  101
    7 - > &111
        --------
           101

    // ------------------

    or |
    when both the bits are unset then the answer is unset else the answer is set
    1 1 -> 1
    1 0 -> 1
    0 1 -> 1
    0 0 -> 0
    example :  a= 5, b = 7
    5 - >    101
    7 - >  | 111
            --------
             111

    // ----------------------------------------

    not ~
    1 -> 0
    0 -> 1

    a=2 a= 000.......10
    ~a = 11111......01


    // ---------------------------------------------
    xor ^
    when both are different then answer is 1 else 0
    1 1 -> 0
    1 0 -> 1
    0 1 -> 1
    0 0 -> 0
    example :  a= 5, b = 7
    5 - >    101
    7 - >  | 111
            --------
             010

    // ----------------------------------------


    left shift operator :
    << shift the numbers by that number and addd 0  at the end---> simialr to multiply by 2 equal to shifted number power
    >> right shift  : shift to two : divide by 2 .

    */
    // int a = 2; // 010
    // int b = 5; // 101
    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (a ^ b) << endl;
    // cout << ~b << endl;

    // // ---------------

    // cout << (5 << 2) << endl;
    // cout << (4 >> 1) << endl;
    // cout << (4 << 4) << endl;

    // question :
    // fibonaci series :  0 1 1 2 3 5 8 13 21 ...
    /*
    algo : a = 0, b=1 , sum = a+b ;
    a= b , b = sum, sum = a+b;
    */

    // cout << "enter how many numbers you want to print " << endl;
    // int n;
    // cin >> n;
    // int a = 0, b = 1, sum = 0;
    // sum = a + b;
    // cout << a << endl;
    // cout << b << endl;
    // for (int i = 1; i < n - 1; i++)
    // {
    //     cout << sum << endl;
    //     a = b;
    //     b = sum;
    //     sum = a + b;
    // }

    //----------------------------------------------------
    /*
    prime number : 2 to number - 1

    ------------------------------------------------------

    pre BODMAS post :
    */
    // int a = 6;
    // cout << (--a * 12 + 3 / 2 - 6 * 10) << endl;

    // ================================================
    // product - sum
    // cout << "enter the number: " << endl;
    // int n;
    // cin >> n;
    // int temp;
    // int sum = 0, pro = 1;
    // while (n > 0)
    // {
    //     temp = n % 10;
    //     pro *= temp;
    //     sum += temp;
    //     n /= 10;
    // }
    // cout << pro - sum << endl;

    // =====================================================

    /*
    decimal to binary  divede the number by 2 every time till the number is 0

    */
    cout << "enter the number to be converted to binary : " << endl;
    int n;
    cin >> n;
    vector<int> v;
    while (n != 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v.at(i) << " ";

        return 0;
}