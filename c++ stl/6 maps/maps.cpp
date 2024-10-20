#include <iostream>
#include <map>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

void print(map<string, int> &m)
{
    cout << "\n\nnew map" << endl;
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}
void print(map<int, string> &m)
{
    cout << "\n\nnew map" << endl;
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}
int main()
{

    /*
    normal maps, unordered maps : are two types of maps .
    maps is a data structure which stores the key and its associated value within it .


    normal maps stores the data in sorted order.
    example : 3 2 1 will be stored as 1 2 3
    red black trees is the internal implementaions

    but in unordered map as the name suggests , does not store the value in order

    maps are stored, in non continuous manner unlike the vectors , so it+n wont work but it++ will.

    */
    map<int, string> m; // key , value
    m[1] = "abc";
    m[5] = "cdc";
    m[7] = "ine";
    m[0];              // the string will be empty
    m[7] = "replaced"; // unique values are only stored .

    // sorted storing

    // either use
    m.insert({4, "rohit"}); // key value
    map<int, string>::iterator it;

    // printing using long iterator code
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << (*it).second << endl;
    }

    map<string, int> m1; // mapping int to string lexographically stored in the memory
    m1["rohit"] = 38;    // rohit is the key and the 38 is the value asssociatef to it

    m1["amaya"] = 48;
    m1.insert({"kshitij", 11});
    m1[" "]; // the value will be 0

    // printing using auto loop
    for (auto i : m1)
    {
        cout << i.first << " " << i.second << endl;
    }
    // time taken for insertion adn for accessing the map  elements is O(log(n))

    // -----------------------------------

    map<int, string>::iterator i = m.find(5);
    cout << i->first << " " << i->second; // O(log(n));

    //---------------------------
    // erase map.erase : either delete by key or by iterator
    m.erase(5);
    print(m);
    // or by iterator
    m1.erase("amaya");
    print(m1);

    // clear functions : remove all the elements

    return 0;
}