#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "enter any number: ";
    cin >> num;
    int temp, sum = 0;
    while (num != 0)
    {
        temp = num % 10;
        sum = (sum * 10) + temp;
        num /= 10;
    }
    cout << sum << " is the reversed number.";
    return 0;
}