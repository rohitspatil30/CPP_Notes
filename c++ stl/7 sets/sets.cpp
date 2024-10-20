#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void print(set<string> &s)
{
}

int main()
{
    // maps with only keys and no values associated to it is called as sets. it store unique values.

    // declaration :
    // set<vector<int>> s; nested are also allowed

    set<string> s; // sets alos uses the implementataion of red balck trees.

    // sets are of two types set normal set and unordered sets.

    s.insert("rohit"); // log(n)
    s.emplace("amaya");
    auto it = s.find("rohit"); // log(n)
    cout << *it << endl;

    for (auto i : s) // always prints in sorted order
        cout << "\n========\n"
             << i << endl;
    s.insert("rohit"); // will only inert once, stores uniques items .

    s.erase("amaya");
    for (auto i : s) // always prints in sorted order
        cout << "\n========\n"
             << i << endl;

    s.insert("kshitij");

    // unoredered set : cannot have nested cpmplex data type like vector, coz its hash funciton cannot be used.

    // O(1), insertion, find and access
    // used when we have to chek if any particular alue is present in the caontainer or not and the set order does not matter.

    multiset<string> ms;
    ms.insert("rohit");
    ms.insert("rohit");
    auto t = ms.find("rohit");
    // find returns the first iterator occurance of the key.
    // when you pass the iterator in the erase funciton and erase it , only the iterator will be erased not its multiple copies but this is not int the case of
    // normal delete function , which deltes all the apperances of the element

    return 0;
}