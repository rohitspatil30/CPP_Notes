/*
some properties of xor operator :

1)x^0=x  identity

2)x^y=y^x  associative

3)x ^ ( y^ z)= (x^y)^z commutative

4) x^x =0


so here simply do the xor of all elements:

even number will cancel each other and the odd one will be left behind which is the answer:

*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int res = 0;
    int n;
    cout << "enter thre size of the array: " << endl;
    cin >> n;

    int arr[n];
    cout << "enter the values: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    cout << res << endl;
}