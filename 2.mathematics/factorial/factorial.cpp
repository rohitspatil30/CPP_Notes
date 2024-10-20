#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

// template<class T>

class count
{

public:
    int fact_iter(int n)
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }

    int fact_recur(int n)
    {

        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
            return n * fact_recur(n - 1);
    }
};

int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    count obj;
    cout << "the factorial of the number is: " << obj.fact_iter(n) << endl;
    cout << "the factorial of the number is: " << obj.fact_recur(n);

    return 0;
}