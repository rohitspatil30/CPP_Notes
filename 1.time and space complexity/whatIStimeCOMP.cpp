// analysis of an algorithm
// before starting to write an algorithm its important to know which algorithm is better . so to find out we use many tools:

// question 1:
// program to find sum of n natural numbers:
/*
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int n;
    cout << "enter the number till which you want the sum : " << endl;
    cin >> n;
    // method 1:
    int sum{};
    for (int i{1}; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "the sum is " << sum << endl;

    // method two : direct formula:
    cout << "the sum is: " << (n * (n + 1)) / 2 << endl;

    return 0;
    }
    */

/*
now here all these factors that which code among the two will be more efficient :
1)proccessor of the machine
2)any updates running in the background
3)programming language used
4)input value

but to overcome these problems we use an efficeint way to analize the code which called as the asymptotic analysis.
*/

//    =================================================

/*
what is asymptotic analysis:
here we measure order growth:
order of growth is the growth or the increase in the time taken as the input grows in the code.
it may be linear , quadratic, etc.

does not depend upon the machine time:
no need of implmentation.

now comparing our solution written above:

method one:
int sum;
 for (int i{1}; i <= n; i++)
    {
        sum = sum + i;
    }
return sum;

here the int sum and return statement take constant time which is one unit and the loop which runs for n times and executes an operation constant times it takes c*n units

total: c1*n+c2;

method two:cout << "the sum is: " << (n * (n + 1)) / 2 << endl;

here every operation or statement is assumed to take one unit of time only......

so the addition multiplication and the division happens in constatnt time

total time: c1.

which is more efficient method two...

===================================================================

order of growth

let f(n) and g(n) be two positive function where n is the inout size n>0;

if f(n) is said to growing faster with increasing input than g(n) then,

:::  g(n)/f(n) =0
::: n->infinity

or

:::f(n)/g(n)=infinity
:::n->infinity

example:

f(n)=n^2+ n + 6
g(n)=2*n + 5


for n=0;
f(n)=6
g(n)=5

for n=1
f(n)=8
g(n)=7

for n=5
f(n)=36
g(n)=17

so;

when n-> inf
f(n)/g(n)=infinity
  or
g(n)/f(n) =0

hence proved :

but these oreder of the growth is for complete comparison:

faster way check for the leading term

f(n)==n^2

g(n)==n

so , we say that f(n) has more order of growth or f(n) is more inefficeient algorithm.

g(n) can be declared as the slower growing but efficient algo.

general chain:

1 < loglogn < logn < n^1/3 < n^1/2 <n < n^2 < n^3 < 2^n < n^n < n!

==========================================================================

best, avarage and worst case time complexity:

int getsum(int arr[],int n){
    int sum=0;-------------------->constant
    for(int i=0;i<n;i++){
        sum=sum+arr[i];---------->n
        return sum;--------------->n
    }
    return sum;--------------->constant

    total time: c1*n + c2;
    order of growth : n;
}

int getsum(int arr[],int n){
    if(n%2==0){
        return 0;-------->constant
    }
    else{
        int sum=0;---------->n
        for(int i=0;i<n;i++){
        sum=sum+arr[i];---------->n
        return sum;--------------->n
        }
    }
}

for n=even;
total time: c1;
OOG: 1

for n=odd;
toatl time: c1*n+c2;
OOG: n

so, whwn the program having CONDITIONAL STATEMENTS the program might not have one specific order of growth. In the above example we saw that the even input will give us the minimum time to execute the program and the odd input will give the maximum time :

this can be divide into three types:

best case :

where the code gives minimum execution time

average case:
real average of all the inputs:
that is sum of time taken by all the algorithm / total inputs

worst case : themaximum  time taken by the algorithm for the certain inputs.

closure:
here we dont know what inputs the user is going to  give so taking avarage case may not be an ideal case ,
similarly we cannot sell our software on the basis of the best time taken , what if you fail to deliver what you said that is what if it takes more than the best case time. then your product wont match the promises given .
hence cannot be considered ideal but yes can be taken as an information for the developers:

so , we always take the owrst time taken by the algorithm to produce our results.


==================================================================

Asymptotic notation:

let take an example of searching in an array here the best case is the element is found at first index only ant the worst case is element not found. so the three types of order of growth when we consider these three cases are
1)big o (O):
this gives the exact or greater order of growth that is in this case n or higher that that:

2)theta or average(0):
this gives the exact order of growth

3)omega (_()_):
this gives exact or lower upto constant order of growth .

here best order of growth is constant ehich is best time it can be represented using omega only and worst case is n which can be represented by either theta or big o

best case is: _()_(1)
and best casse : O(n) or 0(n);
average case : depends on the size of array.

but again if big o is used to represent the upper bound then it means that it can be used to show worst case that
it takes O(1) for the worst case and every possible order of growth like n or n^2 or even n! which is above 1.

hence we use only the big o notation in real life to take the order of growth to consider the worsst possible scenarios of this case:

worst: O(n) or above
best : O(1) or above
average: O(n)

but as discussed best and average are something that cannot gives satisfying solutions so the final time comlexity is:

O(n).

big o notation : it states that there exist some constant c and input n0 such that n0>=n and n>0; and the two positive functions f(n) and g(n) suxh that it can be written as:

f(n)<=c* g(n).

----------------------

theta notation 0:

it states : c1*g(n)<=f(n)<=c2*g(n)

-----------------------

omega notation:

it states:

f(n)>=c*g(n)

----------------------

analysis of loops:

for(int i=1;i<n;i++){
    statement: --------------------> n
}

O(n);

for(int i=1;i>=1;i--){
    statement: --------------------> n
}

O(n)

for(int i=1;i<n;i*c){
    statement: --------------------> n
}

O(logn)

for(int i=1;i<n;i/c){
    statement: --------------------> log n
}

O(logn)

for(int i=1;i<n;pow(i,c)){
    statement: --------------------> log n
}

O(loglogn)

======================================================

multiple loops:

for(int i=1;i<n;i++){
    statement: --------------------> n
}
for(int i=1;i<n;i*2){
    statement: --------------------> log n
}
for(int i=1;i<100;i++){
    statement: --------------------> constant
}


total: n + log n + constant


but we consider one with highest growing rate: n
final: O(n)

--------------------------------
nested for loop: we always multiply

for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){--------------->n
    statement: --------------------> n*n;
}

O(n^2)

for(int i=1;i<n;i++){
    for(int j=1;j<n;j*c){--------------->n
    statement: --------------------> n*logn;
}

O(nlogn)

for(int i=1;i<n;i++){                      |
    for(int j=1;j<n;j*c){--------------->n |---------->O(nlogn)
    statement: --------------------> n*logn|
}

for(int i=1;i<n;i++){                       |
    for(int j=1;j<n;j++){--------------->n  |----------->O(n^2)
    statement: --------------------> n*n;   |
}

total: O(nlogn) + O(n^2)
---------> but we will consider the greater one: O(n^2)

============================================================================

recurance relation:

void print(int n){
    if(n<=0){--------------------->base case: constant c1
        return;
    }
    else{
        cout<<"hi";--------------->constant c2
        print(n/2);----------------->T(n/2)
        print(n/2);----------------->T(n/2)
        }
    }

total: 2*T(n/2) + c1+c2


-----------------------------------------

void fun(int n){
if(n<=0)----------------------------------->base case: n=0:
    return ;                                constant O(1) c1
for(int i=0;i<ni++){----------->loop
cout<<"hi";
}----------------->n
fun(n/2)---------------> T(n/2)
fun(n/3)---------------->T(n/3)------------------>total: t(n/2)+ T(n/3)+ O(n) +c1
}

================================================================================================

space complexity is defined as order of growth of memory space or RAM space. memory taken to run the algorithm.
lets consider two functions:

int getsum(int n){----------------------------> variables used n and funtions used return
    return (n*(n+1))/2;                         so n and return statement will take some
}                                               constant amount memory so sc: O(1);

------------------------------

int getsum(int n){------------------->variables used i,n,sum and functions used return so
    int sum=0;                       here too all the variables and the function take constant
    for(int i=1;i<=n;i+=1){             amount of time so,..sc: O(1);
        sum=sum+i;
    }
    return sum;
}

-----------
NOTE: that both the functions are having different time complexities but same space complexity:

now lets consider this fucntion:

int getsum(int arr[],int n){------>here variables are i , n , sum having constant space comp
    int sum=0;                      but arr[] have space as n input size, so the sc: O(n).
    for(int i=0;i<n;i+=1){
        sum=sum+arr[i];
    }
    return sum;
}

note we can also express these space complexities as 0(n) as we are getting exact space required by the machine

------------------------------------

auxilary space:

Order of growth of extra space or temporary memory in terms of memory;

like we need to understand this term carefully: extra memory, it is apart from the declared variables are we going to need more memory if no then it's aux space is O(1).
else for every extra space our order of growth increases.


int getsum(int arr[],int n){------>here variables are i , n , sum having constant space comp
    int sum=0;                      but arr[] have space as n input size, so the sc: O(n).
    for(int i=0;i<n;i+=1){
        sum=sum+arr[i];
    }
    return sum;
}

now here apart from the declared array we are not declaring any other array to solve the program so even though our sc;  O(n) our space will be still O(1).


--------------------------------------------------
space complexity of recursion:


for n=5 (from main):

int fun(int n){
    if(n<=0)
        return 0;
    return n+fun(n-1);
}

ok, now in this recursive problem we although have only 1 variable (n ) and return statement having constant sc, but because the function call needs some space in the memory we can say that every recursive function call will need some space in memory so here wew are calling fun(5) from the main it will recursively call for fun(n-1) till it gets fun(0) once we get the if function true the work of fun(0) is over and it will be removed similarly all the function after operation will be removed here, the point is that for call of n we need n+1 recursive calls so,

sc: O(n)

and here calling of function is also meant by asking for extra space for storing funs in memory so,

aux space : O(n) ----------->for n recursive calls.









*/