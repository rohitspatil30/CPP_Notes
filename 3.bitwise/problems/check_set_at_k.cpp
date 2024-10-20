/*

position in bits:

if k is a position in bits then it is represented as:
n=5: 000....101;
k=3;        ^
            |
so ,        k

hence write a code to find whether in a binary representation kth bit is set(1) or unset(0);

idea : is to use left shift operator:
n=5;
k=3;
            k
000........(1)01

take binary 1:
and take the and with kth -1 positon now , why -1 because binary 1 will be already at 1 postion to reach out till kth postion move k position by left shift operator and move on back and take and of it, if the result contains 1 binary 1 which is left behind by the and operator so, after and operator if the answer is not 0 then print yes else no :

*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int n;
    int k;
    cout << "enter the number: " << endl;
    cin >> n;
    cout << "enter the position : " << endl;
    cin >> k;
    if ((n & (1 << (k - 1))) != 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// void isKthBitSet(int n, int k)
// {
//     if (n & (1 << (k - 1)))
//         cout << "SET";
//     else
//         cout << "NOT SET";
// }

// // Driver code
// int main()
// {
//     int n = 5, k = 1;
//     isKthBitSet(n, k);
//     return 0;
// }