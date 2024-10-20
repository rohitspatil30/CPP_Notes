#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ios>
// #include<manip>

using namespace std;
int main()
{
    char ch;
    printf("hello world!  enter you character:  ");
    cin >> ch;
    printf("your charcarter is: %c", ch);
    cout << "\nyour characrter is: " << ch << endl;
    std::boolalpha;
    cout << isalpha(ch) << " this is the result.";

    // cout <<  uppercase("rohit ");
}