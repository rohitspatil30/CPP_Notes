// find whether a number is a power of two:
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "enter any number: " << endl;
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "no";
    }
    if ((n & (n - 1)) == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    // return (n!=0)&&((n & (n-1))==0) ;
}