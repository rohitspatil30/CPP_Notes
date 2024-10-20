#include <iostream>

#include <bits/stdc++.h>

using namespace std;

void print(unordered_map<string, int> u)
{
    for (auto i : u)
    {
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{

    // diferences between unordered maps and maps :
    // declaration:
    unordered_map<string, int> u; // acts like stack every new entry is on top
    u["rohit"];
    u["amaya"] = 5;
    u["kshtij"] = 10; // will be at the first
    print(u);
    // note: time complexity : uses hash tables for insertion so every value creates a hash O(1). direct insertion and access. average time complexity.

    // valid key data types are not allowed like nested unoredered map.

    return 0;
}