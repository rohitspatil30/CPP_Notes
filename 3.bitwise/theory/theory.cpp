#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;
void binary_to_decimal(int binary)
{
    vector<int> v;
    int ans, sum = 0;
    while (binary != 0)
    {
        v.push_back(binary % 10);
        binary /= 10;
    }
    for (int i = 0; i < v.size(); i++)
    {
        ans = v.at(i) * pow(2, i);
        sum = sum + ans;
    }
    cout << "the answer is: " << sum;
}

void Decimal_To_binary(int decimal)
{

    vector<int> v;
    while (decimal != 0)
    {
        v.push_back(decimal % 2);
        decimal /= 2;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v.at(i);
    }
}

int main()
{
    /*
    int num;
    int option = 1;
    long long int binary;
    int decimal;
    while (option > 0)
    {
        cout << "\n\nenter which conversion you want to perform :\n1)binary to decimal\n2)decimal to binary \n3)exit : ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\nenter the binary number: ";
            cin >> binary;
            binary_to_decimal(binary);

            break;
        case 2:
            cout << "\nenter the decimal number: ";
            cin >> decimal;
            Decimal_To_binary(decimal);
            break;
        case 3:
            exit(0);

        default:
            cout << "invalid input";
            break;
        }
    }
    */

    // bitwise operator:

    // int x = 3;
    // int y = 5;
    // bitwise and &
    /*
    i i o
    1 1 1
    1 0 0
    0 1 0
    0 0 0

    so ,
    0 0 1 0 1 & 0 0 0 1 1

    0 0 1 0 1
    0 0 0 1 1
    ---------
    0 0 0 0 1---------> 1 in binary
    ---------

    taking our example:
    */
    // cout << "answer for bitwise and is: " << (x & y) << endl;
    // x=3; 011
    // y=5; 101
    //     -----
    //      001 ------------> 1 in binary
    //     -----

    // ====================================================

    /*
    bitwise or |

    i i o
    1 1 1
    1 0 1
    0 1 1
    0 0 0

    so ,
    0 0 1 0 1 | 0 0 0 1 1

    0 0 1 0 1
    0 0 0 1 1
    ---------
    0 0 1 1 1------------------> 7 in binary
    ---------

    so taking our example:

    */
    // cout << "answer for bitwise or is: " << (x | y) << endl;
    // x=3; 011
    // y=5; 101
    //     -----
    //      111 ------------> 7 in binary
    //     -----

    // ====================================================

    /*
    bitwise xor ^ (opposite attract , similar repel )

    i i o
    1 1 0
    1 0 1
    0 1 1
    0 0 0


    so ,
    0 0 1 0 1 ^ 0 0 0 1 1

    0 0 1 0 1
    0 0 0 1 1
    ---------
    0 0 1 1 0------------------> 6 in binary
    ---------

    so taking our example:

    */

    // cout << "answer for bitwise xor is: " << (x ^ y) << endl;
    // x=3; 011
    // y=5; 101
    //     -----
    //      110 ------------> 6 in binary
    //     -----

    // ====================================================
    /*
    cout << x << endl;
    x = 15;
    cout << (x & x) << endl;//15
    cout << (x | x) << endl;//15


    *****************cout << (x ^ x) << endl;//0 self xor always results in 0.***************


    */
    // =================================================================

    // left shift operator

    /*
    <<: left shift syntax (num_in_binary << num_of_times_to_be_shifted)
    or(x<<y);
     x=10000110 // 131
     y=3
     x<<y : 100 << 00110 <<000 ----------> 00110000 //48

     x<<x not possible

     another way of representation:
      x*2^y

    */
    /*
     int a = 6; // 110
     cout << (6 << 2) << endl;
     // or
     cout << (a << 2) << endl;
     */
    // cout << a << endl;
    // a = (a << 2);
    // cout << a << endl;

    // representation: x* 2^y
    /*
    x=6;
    y=2;
    (x<<y): 00....110(64 bit representation)<< 2
            00<<00..110<<00 ---------->00...11000 // 24

    6 * 2^ 2 = 6*4 = 24

    */
    // cout << (a << 5) << endl;
    /*
    00.......110 << 5
    00..11000000 // 128 +64 =192

    or

    6 * 2^ 5= 6* 32 =192
    */
    //    ========================================================================

    /*
    right shift operator :
    >> : syntax (num_to_be_shifted >> number_of_times_shifted)
    (x>>y)
    example:
    x=19
    y=3

    x=00....10011 << 3
    000>>00...10>>011 ---> 000...0010 //2

    other representation :
     (floor(x/pow(2,y))

    */
    /*
     int n = 19;
     int m = 3;
     cout << (n >> 3) << endl;
     cout << floor(n / pow(2, m)) << endl;
     */
    /*
    19/2^3=floor (19 /8 ) =2.3= 2
    */

    //    =====================================================================

    /*
    bitwise not

    ~: unary operator which flips the bits and gives a NEGATIVE ANSWER in incremented variable value:

    first we will consider signed int :
    signed bit has leading bit or the leftmost bit as the sign determiner bit means if the leading bit is 0 then the number is positive and if it is 1 then it is negative.

    ex: 5 000.........101;
     ~5:(1)111111111...010;
         ^
         |
        represents (-) sign:

        representation:
        if the number is positive or (0) at leading position then simply do the decimal to binary conversion you put it in 31 bits and put 0 in front of it
        (0)5 = +5;
        if the number is negative put a one and then put a 2's compliment of the remaining 31 bits.

        2'S COMPIMENT:
        we know range the signed integer:

        (2^31 - 1 - number)

        where 1-number = x

        so (2^31 -x ) here  ( x ) is your answer :
    */

    int p = 5;
    cout << "original : " << p << endl;
    cout << "the example of positive number: " << (~p) << endl;
    // cout << (~5) << endl;
    /*
    5 =0000...101

    ::: ~5 : 111111....010 where (1)1111111..010

    (1)= (-)

    (-)111...010 : (2^31-1-5) or (2^31 - 6 )
    (-)6
    = -6<---------------is the answer



    ==========================================
    but for
    negative number:
    11111...101 (negative number)

    0000000101: 5 simple conversion

    */
    //    negative number:
    p = (~p);
    cout << "original : " << p << endl;
    cout << "the example of negative number: " << (~p) << endl;

    // -----------------------------------------------
    // now here let us consider unsigned int
    // int g=5u;
    // or
    unsigned int g = 5;
    /*
    no signed number that is no negatives only  WHOLE NUMBERS
    range signed: 2^31 : (2^31) -1

    as discussed earlier signed bit has leading bit or the leftmost bit as the sign determiner bit means if the leading bit is 0 then the number is positive and if it is 1 then it is negative.

    but as therer are no negs in unsigned int range is:
    unsigned int range is: 0 : (2^32)-1
    or
    for a 32 bit integer:
    000...00(all 0) // 0 in binary
    .
    .
    .
    .
    111....11 (all 1) // (2^32)-1 : 4294967296 -1  : 4294967295

    */
    cout << "original : " << g << endl;
    cout << "after conversion from unsigned int : " << (~g) << endl;
    // 4294967295 -5 = 4194967290

    // NOTE: AVOID USING LEFT SHIFT, RIGHT SHIFT, OR NOT OPERATOR ON NEGATIVE NUMBERS BECAUSE IT'S OUTPUT IS UNDEFINED IN C++ STANDARD.

    // ========================================================================
}