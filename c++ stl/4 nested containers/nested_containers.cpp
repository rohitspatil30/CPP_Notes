#include <bits/stdc++.h>

using namespace std;

int main()
{

    // nesting in vector :

    // =-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=

    // pair<int,int> p ={1,2};
    // pair<int, int> p = make_pair(1, 2);
    // cout << "the pair directly initialized : " << p.first << " " << p.second << endl;

    // cout << "------------------" << endl;

    // vector<int> v1 = {1, 2, 3, 4};
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1.at(i) << " ";
    // }
    // cout << "\n"
    //      << endl;
    //=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=

    // long long int n, m;
    // //vector of pairs
    // vector<pair<int, int>> v; //{{1, 2}, {2, 3}};//direct definition.

    // for (int i = 0; i < 2; i++)
    // {
    //     // cout << "enter the velues for\n"
    //     //      << endl;
    //     // cout << "first : ";
    //     // cin >> n;
    //     // v[i].first = n;
    //     // cout << "second : ";
    //     // cin >> m;
    //     // v[i].second = m;
    //     // v.push_back(v[i]);

    //     //-----------------------------------

    //     // or cp pov:
    //     cin >> n >> m;
    //     // v[i].first = n;
    //     // v[i].second = m;
    //     // v.push_back(v[i]);
    //     v.push_back({n, m});
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << " \n";
    // }
    // cout << "\n"
    //      << endl;

    //=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=
    /*
     // array of vector : it means that there is a array whose every index is an array itslef of fixed means the matrix with fixed number of columns but verying number of rows in the matrix .

        // declartion :
        vector<int> arr[5];
        // there are 5 arrays not more than that , every array index is a vector can have any number of value.
        int x;
        for (int i = 0; i < 5; i++)
        {
            int n;
            cout << "enter the number of elements in first vector " << endl;
            cin >> n;

            cout << "enter the elements :";
            for (int i = 0; i < n; i++)
            {
                cin >> x;
            }
        }


    */

    // definition :

    // to make both the rows and columns fixed

    vector<array<int, 5>> v; // vector of arrays;

    // vector of vector :
    int N;
    cin >> N;
    vector<vector<int>> V;
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        V.push_back(temp);
        // v.push_back(vector<int> ()); very important statement inorder to extend the matrix or to add a pair in vector of pairs if it is a vector then you can push back JUST USE SUBSTITUTION.
    }
    return 0;
}