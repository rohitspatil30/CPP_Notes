#include <iostream>
#include <string>

using namespace std;

std::string check(int num)
{
    if (num >= 0)
    {
        return "the number is positive ";
    }
    else
    {
        return "the number is negative. ";
    }
}

int main()
{
    std::string ans;
    int num;
    cout << "enter any number: ";
    cin >> num;
    ans = check(num);
    cout << ans;
}