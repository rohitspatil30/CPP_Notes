#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print_one_to_n(int n)
{
    {
        if (n == 1)
        {
            cout << n << endl;
            return;
        }
        else
        {
            print_one_to_n(n - 1);
            cout << n << endl;
            return;
        }
    }
}

int main()
{
    print_one_to_n(5);
}
