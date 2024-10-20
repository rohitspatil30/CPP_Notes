#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

// template<class T>

class count
{

public:
    void is_palindrome(string a)
    {
        int n = a.size();
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] != a[n - i - 1])
            {
                cout << "not a palindrome " << endl;
            }
        }
        if (i > n / 2)
        {
            cout << "it is a palindrome " << endl;
        }
    }
};

int main()
{
    string s;
    ;
    cout << "enter  the string  : ";

    cin >> s;
    count obj;
    obj.is_palindrome(s);

    return 0;
}