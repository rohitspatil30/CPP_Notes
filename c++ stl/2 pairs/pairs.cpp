/*
pairs:
used to store two values together.
*/

#include <iostream>

#include <bits/stdc++.h>

using namespace std;

pair<int, int> giver(int a, int b)
{
     cout << "--------------------in function -----------\n";
     pair<int, int> p;
     p.first = a;
     p.second = b;
     // changes made here when passedby value i.e pair<int, int> giver(int a, int b).
     p.second = 8;
     cout << p.first << " " << p.second << endl;
     return p;
}

int main()
{
     pair<int, int> p;
     p.first = 4;
     p.second = 5;
     cout << p.first << " " << p.second << endl;
     // p = giver();

     pair<int, string> pr;
     pr.first = 100;
     pr.second = "rohit";
     cout << pr.first << " " << pr.second << endl;

     // second way:
     pair<string, string> prs;
     // prs = make_pair("rohit", "patil");
     // here you migt have noticed that the make_pair key word was used when we used "( )" brackets to declare the pair but when we have to initialize the pair with { } then we do it this ways :
     prs = {"rohit", "patil"};
     cout << prs.first << " " << prs.second << endl;

     // copy pairs:

     // // copy with value;
     // pair<int, int> ps = p;
     // cout<<"-------------------------------\n"<<endl;
     // cout<<"before the copy"<<endl;
     // cout << p.first << " " << p.second << endl;
     // cout << ps.first << " " << ps.second << endl;

     // ps.second = 6;
     // cout<<"-------------------------------\n"<<endl;
     // cout<<"after the copy"<<endl;
     // cout << p.first << " " << p.second << endl;
     // cout << ps.first << " " << ps.second << endl;

     // the reason is that the only copy of the pair is passed to the ps pair the p pair has its own identity.

     // copy with reference:

     pair<int, int> &ps = p;
     cout << "-------------------------------\n"
          << endl;
     cout << "before the copy" << endl;
     cout << p.first << " " << p.second << endl;
     cout << ps.first << " " << ps.second << endl;

     ps.second = 6;
     cout << "-------------------------------\n"
          << endl;
     cout << "after the copy" << endl;
     cout << p.first << " " << p.second << endl;
     cout << ps.first << " " << ps.second << endl;

     // here the entire address of the pair is passed to the ps pair so that every change made in the value of ps will be reflected in p also.

     // uses of the array:

     // to save the array relations:
     // bascially used to store the relation between the elements;

     int arr[] = {1, 2, 3};
     int arr2[] = {2, 4, 6};
     pair<int, int> cmp;

     cout << "-------------------------------\n"
          << endl;
     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
     {
          cmp.first = arr[i];
          cmp.second = arr2[i];
          cout << cmp.first << " " << cmp.second << endl;
     }
     cout << "-------------------------------\n"
          << endl;
     pair<int, int> v = giver(4, 5);
     cout << v.first << " " << v.second << endl;

     cout << "-------------------------------\n"
          << endl;
     pair<int, string> par;
     par = {2, "hello"};
     cout << par.first << " " << par.second << endl;

     return 0;
}
