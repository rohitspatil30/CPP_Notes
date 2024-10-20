// #include <iostream>
// #include <cmath>
// #include <math.h>
// #include <string>
// #include <limits.h>
// #include <bits/stdc++.h>

// using std::cin;
// using std::cout;
// using std::endl;
// using std::string;

// void check_prime()
// {
//     cout << "enter any number: " << endl;
//     int num;
//     cin >> num;
//     // method 1:
//     int flag = 0;
//     // for (int i = 2; i < num; i++)
//     // {
//     //     if (num % i == 0)
//     //     {
//     //         cout << "the number is not prime: " << endl;
//     //         flag = 1;
//     //         break;
//     //     }
//     //     else
//     //     {
//     //         continue;
//     //     }
//     // }
//     // if (!flag)
//     // {
//     //     cout << "the number is prime" << endl;
//     // }

//     // method two O(sqrt(n)):
//     // run till the square root occurs as the numbers appears in pairs only
//     // for(int i=2;i*i<=num;i++){
//     //     if(num%i==0){
//     //          cout << "the number is not prime: " << endl;
//     //          flag = 1;
//     //          break;
//     //     }
//     // }
//     // if (!flag)
//     // {
//     //     cout << "the number is prime" << endl;
//     // }

//     // method 3:
//     if (num == 1)
//     {
//         cout << "it is not prime";
//     }
//     if (num % 2 == 0 || num % 3 == 0)
//     {
//         cout << "it is not prime:";
//     }
//     for (int i = 5; i * i <= num; i = i + 6)
//     {
//         if (num % 1 == 0 || num % (i + 2) == 0)
//         {
//             cout << "the number is not prime";
//             return;
//         }
//     }
//     cout << "the number is prime: " << endl;
//     return;
// }

// void lcm()
// {
//     cout << "enter two numbers two find the lcm : " << endl;
//     int n1, n2;
//     cin >> n1 >> n2;
//     int max = (n1 > n2) ? n1 : n2;
//     int min = (n1 < n2) ? n1 : n2;
//     for (int i = 1; i <= max; i++)
//     {
//         if (((max * i) % min) == 0)
//         {
//             cout << "lcm is: " << max * i << endl;
//             break;
//         }
//     }

//     cout << "hcf is " << std::gcd(n1, n2) << endl;
//     // if (n2 == 0)
//     // {
//     //     cout<< n1;
//     // }
//     // else
//     // {
//     //     return gcd(n2, n1 % n2);
//     // }

//     // ------------------------------------
//     // | a*b = HCF(a,b) * LCM(a,b)        |
//     // ------------------------------------
// }
// long long int fact(long long int n)
// {
//     // method :recursive:
//     // if (n == 1 || n == 0)
//     // {
//     //     return 1;
//     // }
//     // return n * fact(n - 1);

//     // method : iterative:
//     int facto = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         facto = facto * i;
//     }
//     return facto;
// }

// int trailing_zeros(int n)
// {
//     int num = fact(n);
//     int count = 0;
//     int temp = 0;
//     while (num > 0)
//     {

//         temp = num % 10;
//         if (temp != 0)
//         {
//             return count;
//         }
//         count++;
//         num /= 10;
//     }
//     return 0;
// }

// string palin_check(int n)

// {
//     int Temp = n;
//     int temp = 0;
//     int rev = 0;
//     while (n > 0)

//     {
//         temp = n % 10;
//         rev = temp + rev * 10;
//         n = n / 10;
//     }
//     if (Temp == rev)
//     {
//         return ("the number is a palindrome: ");
//     }
//     else
//     {
//         return ("the number is not a palindrome: ");
//     }
// }

// int find_number_of_digits(int n)
// {
//     // method 1: iterative solution
//     /*int count = 0;
//     while (n != 0)
//     {
//         n /= 10;
//         count += 1;
//     }

//     return count;
//     */

//     //    --------------------------------------

//     // method 2:
//     // int count = 0;
//     // if (n == 0)
//     //     return 0;
//     // return 1 + find_number_of_digits(n / 10);

//     // ------------------------------------------

//     // method 3:
//     return (floor(log10(n)) + 1);
// }

// int main()
// {
//     int n = 12321;
//     cout << "number of digits are: " << find_number_of_digits(n) << endl;

//     /*
//     arithmetic progression:
//     nth term =a + (n-1)*d
//     sum : n/2+(2*a+(n-1)*d)

//     geometric progression:
//     nth term : a*r ^n-1
//     sum: (a * (1-r^n))/1-r

//     quadratic equation:
//     d = sqrt(b^2-4*a*c)
//     roots: -b + d/2*a  and  -b - d/2*a

//     mean=addition/number of observation

//     median : when in ascending middle in odd and if even mean of middle two

//     prime: 1 and num itself

//     LCM: lowest common multiple

//     HCF OR GCD: Highest common factor / greatest common divisor

//     factorial: n* n-1 * ...1 ---->0!=1

//     permutation npr

//     combination ncr

//     modular :
// ------------------------------------------

//    */

//     cout << palin_check(n) << endl;
//     int num = 1;
//     cout << "the factorial is: " << fact(num) << endl;
//     cout << "number of trailing zeroes: " << trailing_zeros(num) << endl;

//     lcm();

//     check_prime();
// }
