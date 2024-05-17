/*
recursion:

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

what is reursion?
the process of function calling itself for a simpler problem is called as the recursion

the function call the recursive step, extensively till the base case is encountered from where the answer of each smaller problem converges back tp give the result for original problem

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

why recursion: recursvie code is usually smaller than the iterative code:
if the problem can be broken down to the smaller version then the prb can be easily solved by recursion than using iterative apporach

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

format :

if(test for the base case)
    return some base case value
else if( test for another base case )
    return some other base case value
//the reuturn or the calling case:

else
    return (some work + recursive call)

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
*/

// example: factorial :

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int); // function declaration

int main()
{

    int x;
    cout << "enter a number : " << endl;
    cin >> x;                // number  input
    cout << fact(x) << endl; // call the function
    return 0;
}

int fact(int x)
{
    if (x == 0 || x == 1) // the smallest value is either 1 or 0 for which we have the answer 1 only so return it.
    {
        return 1;
    }
    else
    {
        return fact(x - 1) * x; // this calling the smallr function.
        /*
        we assume that the fact(x) will give us the solution.
        assume that fact(x-1) will also give the solution.
        so if x =6, fact(6) will be giving 6 * fact(5)
        now we know fact(5) will give us 5 *fact(4)
        likt that fact(1) gave us the return value of 1;
        now fact 2 = 2* fact(1) or --> 2* 1 =2 return to fact 3
        fact(3)=3*2--> 6 return to fact 4 --> 4*6=24 --> fact(5)--> 5*24
        finally fact(6)--> 6*24 -->720.

        */
    }
}
/*

recursive vs iteration:

recursion :
terminates when the base case is encontered
each recursive call requires extra space in the stack.
infite recursive calls leads to the stack overflow.
solutions to some to the some problems are easier than the iterative .

iterative:

the code runs till the condtions are false.
the iteration doesnt takes any extra space in teh computer memory.
infinte calls leads to the infinte running coz no extra space is space os created

-------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------

notes on the recursive :

recursive algorithm have two types 1) recursive case and then base case.


 */