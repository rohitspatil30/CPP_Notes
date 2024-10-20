#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*
recursion:
recursion is way to write program in which a function calls itself directly or indirectly

example:

*/

/*
int increment(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return increment(n - 1);
}
*/

/*
working:
increment is called the number is checked if n else called n-1(4)
then 4!=1 called 3
then called 2
then called 1
now 1==1 so, returned one to function whoc called one which is increment 2
then 1 returned to increment 3
then to increment 4
then returned to increment 5
then 1 returned to main.

*/

/*types of function calls:

direct call: function calling itself in ITS OWN CODE

indirect call: when another function calls other function

*/

/*

*/
/*
    syntax:
    fun(parameters){
        base_case

        recursive_call(change in parameters)
    }
*/
int main()
{
    // cout << increment(5) << endl;
}
