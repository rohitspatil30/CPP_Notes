#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{

    /*
    modular arithmetic :
    it gives the remainder when 2 numbers are dividede directly.

    can be applied on all operations
    */
    // example :
    cout << 5 % 2 << endl;       // 1 as remainder
    cout << (3 + 4) % 2 << endl; // (3%2 + 4%2) % 2 --> (1+0)%2-> 1
    cout << (8 - 4) % 3 << endl; // ((8%3-4%3)+3)%3--->((2-1)+3)%3---> 4%3--> 1

    cout << (4 / 3) % 3 << endl;
    cout << (6 * 3) % 4 << endl;

    // used when the addition or multiplication of exponents is put of range . 10^18 * 10^18 mod 5

    // -------------------------------------------------
    // 2) modular exponentiation :

    // exponentiation is a mathematical operation that is expressed as x^n.

    //     int binaryExponentiation(int x,int n)
    // {
    //     if(n==0)
    //         return 1;
    //     else if(n%2 == 0)        //n is even
    //         return binaryExponentiation(x*x,n/2);
    //     else                             //n is odd
    //         return x*binaryExponentiation(x*x,(n-1)/2);
    // }
    // An iterative version of this method is as follows:
    // int binaryExponentiation(int x,int n)
    // {
    //     int result=1;
    //     while(n>0)
    //     {
    //         if(n % 2 ==1)
    //             result=result * x;
    //         x=x*x;
    //         n=n/2;
    //     }
    //     return result; ------------> log(n)
    // }

    // --------------------------------------------------

    /*
        int GCD(int A, int B) {
        if(B==0)
            return A;
        else
            return GCD(B, A % B);   log(n)
        }
    */

    //    -------------------------------------------------

    return 0;
}
