#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // map<int, int> m; // normal

    /*
    comparison of the data type , when we compare any two data type like pair then the larger pair is the one with first key as greater and then the second key is considered, similarly in vector and sets where the elements are compared with their corresponding position if same then move to next position until the larger element is found amognst the 2.
    */
    pair<int, int> p1 = {1, 2};
    pair<int, int> p2 = {1, 3};
    cout << (p1 < p2) << endl;

    p1.first = 2;
    cout << (p1 < p2) << endl;

    // ------------------------

    set<int> s = {1, 2, 3, 4, 5};
    set<int> s1 = {2};
    cout << (s1 > s) << endl; // size does not matter but only the first element.
    // size matters when all the elements same and exhaushted.
    s.erase(1);
    cout << (s1 > s) << endl; // s1 ehaushted but s1 was having element so here size matters.

    // ----------------

    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {2};

    cout << (v1 > v2) << endl;
    v1.erase(v1.begin());
    cout << (v1 > v2) << endl;

    // now complex conatainer inside the maps :
    map<pair<int, int>, int> m;

    // comparison is only done in keys and not in values :

    return 0;
}