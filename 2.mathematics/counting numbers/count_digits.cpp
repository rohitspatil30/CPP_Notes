#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

class count
{
public:
    int count = 0;
    void count_digits(int n)
    {
        while (n > 0)
        {
            n /= 10;
            count++;
        }
        cout << "the number of digits is : " << count << endl;
    }

    void count_digits_formula(int a)
    {
        cout << (floor(log10(a)) + 1) << endl;
    }
};

int main()
{
    int num;
    cout << "enter  the number  : ";

    cin >> num;
    count obj;
    obj.count_digits_formula(num);
    obj.count_digits(num);

    return 0;
}