#include <iostream>

int main()
{
    int a = 2;
    int b = a + 1;
    if ((a = 3) == b)
    {
        std::cout << a;
    }
    else
    {
        std::cout << a + 10;
    }
}