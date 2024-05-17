/*
time complexity :

function :
*/
#include <iostream>

using namespace std;

int sum1(int n)
{
    int sum = 0;                 // constant work (c2)
    for (int i = 1; i <= n; i++) // this will run n times , depending on input n
    {
        sum += i; // n times (nc1)
    }
    return sum;
} // tim complexity : O(n); ---> c1*n +c2

int sum2(int n)
{
    return n * (n + 1) / 2; // this will run the constant amount time no matter the input so .
} // time complexity O(1);---> c1

int main()
{

    cout << sum1(5);
    cout << "\n"
         << sum2(6);

    /*
    order of growth :  we always consider the larger degree of n .
    no matter how big is constant number is, and how small the linear funtion is there will a certain value of input where the linear funtion will take more time than constant function

    example :2*n +5 will cross the 10 value at input value more than 3.


    -----------------------------------------------------------------------

    direct way to find out the order of growth : ignore lower order terms and ignore leading constants :

    ex : 2*n^3 + 7 *n^2 + n +5 --->  n^3 is the order of growth


    general order of growth

    constant < loglogn < logn < n^1/3 < n^1/2 < n < nlogn < n^2 < n^3 < n^4 < 2^n < n^n .

    lower the order of growth better the algorithm .


    -----------------------------------------------------------------------

    best, avg , worst case order of growth

    void func(){
        if (n%2==0) return n * (n + 1) / 2;---> constant work
        else --> for loop

    }


    here there are two condition when the number is even then the constant amount of work is done else the n times loop is run so here we have three conditions called as the best case , worst case and the avg case :

    best : when the number is even --> 1
    worst : when the number is odd  --> n
    avg : if we consider the choice of even and odd equally likely then the time is considered avg. --> n

    but in the cases when there is no other option just a single for loop then for all the cases it will be n only.


    asymptotic notation : the way of representation if time complexity .

    three notation are :

    big o --> O :  exact or upper bound
    theta --> 0 : exact
    omega --> _()_ : exact or lower bound

    note : we normally always  consider the worst case time complexity

    ----------------------------------------------------------------------------------

    big O : direct way 2*n + 5 -->  O(n) highest growing term

    if f(n )= O(g(n)) for n>= n0 , f(n)<=c * g(n)

    example : 2n +5  <= c*n where c = 3 and n =1
    
    */

    return 0;
}