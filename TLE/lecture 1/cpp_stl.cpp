#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "hello world" << endl;

    // some basic information about cp :
    /*
    1 sec = 10 ^ 8 operations

    now the question may state that the  n<=2x10^5

    it means that if we solve our question in O(n) which is 2x10^5 then it is much less than 1 sec

    now talking about nlogn n x logn = 2x10^5 x log(2*10^5):

    2 * 10^5 * log2 + 5*log 10

    approx 10^6 still less than 10^8

    O(n^2) = approx (10^5) * 10^5

    but sometimes we would be given that

    t <= 10^4 and n<= 10^5 and n * t is also <= 2*10^n and solve how it was .

    -----------------------------------------------------------------

    ranges :
    int  : -10^9 to 10^9
    long : -10^15 to 10^5
    long long : -10^18 to 10^18

    when int x int or long long x long long = out of range

    so we use modulo arithmetic

    -----------------------------------------------------------------

    save time by using  : cout<<n<<endl;<---- slower because it uses flushing technique,
    so use : cout<<n<<"\n";


    */

    // vectors : dynamic arrays :vector

    vector<int> v;
    // inserting :
    v.push_back(34); // append
    v.push_back(3);

    // other way : defint the size of vetor

    vector<int> vec(10); // size 10

    vector<int> vec1(12, 0); // 0 0 0 0 0 0 0 0 0 0 0 0

    v.pop_back(); // 34

    v.erase(v.begin() + 0);

    reverse(v.begin(), v.end());

    v.size() - 1; // last element

    //------------------------------------

    // iterator : begin(), end()

    // vetor 2d vector

    // vector<vector<int>> mat; // declaration of 2 d vector of infintie rows and infintie columns .

    // but if we just want it like 2d arrays then we need to specific type number of rows and the number of rows
    /*
        long long rows = 5;
        long long cols = 3;
        // this has now become 2d array
        vector<vector<int>> mat(rows, vector<int>(cols));

        for (int i = 0; i < rows; ++i)
        {

            vector<int> temp;
            for (int j = 0; j < cols; ++j)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            mat.push_back(temp);
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << mat[i].at(j) << " ";
            }
            cout << "\n";
        }

        // ================================================
    */
    set<int> st; // sorted , unique elements only inserted, red-black tree
    st.insert(34);
    st.insert(45);
    st.insert(0);
    st.insert(12);
    // note :

    // time to insert, access, and delete is log(n).

    set<int>::iterator it = st.begin(); // iterator is a pointer which goes to next pointer and this increment is different formt eh increment of the arrays
    for (; it != st.end(); it++)
    {
        cout << *it << " "; // pointer needs to be dereferenced
    }                       // tidious job
    cout << "\n";
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    // again pointer wala khel
    for (auto it : st)
    {
        cout << it << " "; // no pointer, no iterator, no dereferencing, just auto key word and for each loop
    }
    cout << "\n";

    // note : accessing the element : log(n) doing it in loop ---> nlog(n) --> printing a set costs nlog(n).

    auto p = st.erase(100); // 100 not present so it will return  null
    cout << p << endl;
    st.erase(34);

    for (auto it : st)
    {
        cout << it << " "; // no pointer, no iterator, no dereferencing, just auto key word and for each loop
    }
    cout << "\n";

    cout << *st.find(45) << endl; // else it will return st.end()

    // =========================================

    // unoredered set --> unique values but not sorted uses hash table so operation is of size O(1). for find, insert, delete.

    // loop will cost -> n not nlogn

    unordered_set<int> unst;

    unst.insert(7);
    unst.insert(99);
    unst.insert(0);
    for (auto i : unst)
        cout << i << " ";
    cout << "\n"; // O(n)

    unst.erase(7);
    for (auto i : unst)
        cout << i << " ";
    cout << "\n";

    // rest all the fucntions are same

    // multiset :  sorted, log(n), allow duplicates

    multiset<int> ms;
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(0);
    ms.insert(40);
    ms.insert(0);

    for (auto i : ms)
        cout << i << " ";
    cout << "\n";

    // all the functions are exact similar to set excpet multiple input for same value,

    // important find funcction will return the iterator to the first occurance of the value and not all the values

    auto r = ms.find(3); // address of 2nd index
    if (r == ++(++ms.begin()))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    // count funcion is an additional fucntion which will count the number f occurances of any value, if tha value does not exitst it will return null

    auto c = ms.count(3);
    cout << "count : " << c << endl;

    // =============================================

    priority_queue<int> pq; // default is max heap
    pq.push(3);             // logn
    pq.push(6);
    cout << pq.top() << endl;
    pq.push(56);
    pq.push(67);
    pq.push(1);

    // for (auto i : pq)
    //     cout << i << " ";
    // cout <<-------> cannot iterate

    // here the largest element is present at the top

    cout << pq.top() << endl;
    pq.pop(); // removes the top element from the heap

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // =========================================================================

    vector<int> v1 = {1, 2, 3, 4, 5};
    cout << boolalpha << binary_search(v1.begin(), v1.end(), 5) << endl; // returns either true of false

    return 0;
}