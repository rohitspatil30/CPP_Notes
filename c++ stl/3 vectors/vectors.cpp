#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printvec(vector<int> v) // v.size() -->O(1)
{
    for (int i = 0; i < v.size(); i++)

    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v;
    /*
        int option;
        int n;
        while (option != 2)
        {
            cout << "do you want to enter the element? " << endl;
            cout << "1) YES" << endl;
            cout << "2) NO" << endl;
            cin >> option;

            switch (option)
            {
            case 1:
                cin >> n;
                v.push_back(n); // O(1);
                break;

            case 2:
                printvec(v);
                break;

            default:
                cout << "wrong option! ";
                break;
            }
        }
*/
    /*
    vector < int> v(3) ;  ->  0 0 0
    v.push_back(8)--> 0 0 0 8

    vector < int > v(5 ,3) ; -> 3 3 3 3 3
    */

    v.push_back(7);
    v.push_back(4);
    // v.pop_back(); // < ----removes last element
    printvec(v);

    vector<int> v2 = v; //->o(n) // copying the elments

    // pass by reference :
    cout << "the copy i passed" << endl;
    printvec(v2);

    v.pop_back();

    printvec(v);
    printvec(v2); // since the vector was normally copied it made the copy of the vector v and hence changes in v does not change v2 so pass bty refernce.

    vector<int> vc;
    vc.push_back(30);
    vc.push_back(54);
    printvec(vc);
    cout << "now copying the elements in refernce : " << endl;
    vector<int> &vc2 = vc;
    printvec(vc2);
    vc.pop_back();
    vc2.push_back(100);
    printvec(vc);
    printvec(vc2);
}