#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{

    /*
    we know that this pairs, arrays and vectors are stored one after the other and can be accesed easily
    */
    /*
    what are iterators ?
    iterartors are like the pointer , but where pointer points to the value of the vector or container the iterator points towards the vlaue of the container .

    the iterator which points to the first value is called the begin() iterator
    and the end( ) points to the next to last value


    note that always do it++ coz it+1 will move to onext location not the next value vectors are applied contiguosly so the it++ and it+1 will be same but for maps which are not the contiuosly allocated will not work.

    */
    vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it = v.begin();
    // while (it != v.end())
    // {
    //     cout << *it << endl; //* to dereference the pointer.
    //     it++;
    // }
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << endl;
    }
    // or just declare it individually and just makeit loop
    vector<int>::iterator i;
    for (i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << " \n"
         << endl;
    // remember the iterator declared for the vector<int> won't work for the vector<pair<int,int>> coz the iterator works on the data type so for the int int pair , we have:

    vector<pair<int, int>> vp = {{1, 2}, {4, 5}, {6, 7}};
    // iterator declaration :
    vector<pair<int, int>>::iterator it;
    for (it = vp.begin(); it < vp.end(); it++)
    {
        // cout<<(*it).first<<" "<<(*it).second<<endl;
        // or
        cout << it->first << " " << it->second << endl;
    }

    // this declaration of the iterator is very long and confusing coz we would be making it different for every data type.
    // so we have a shorter version.
    //------------------------------------------

    // ranged based loop:
    cout << "the vector is printed using ranged based for loop which automatically incremented throught the container and stops when the container ends, so there is no declartion, condition, uodation formula like the tradition for loop : " << endl;
    for (int i : v)
    {
        // here the i is the copy of the actual values not the actual value is printed so any updation in "i" will no affect the actual value of the container .
        // example:
        i++;
        // cout << i << endl;
    }
    cout << "\n\n the incremented value? : " << endl;
    for (int i : v)
    {

        cout << i << endl;
    }
    cout << "so to change actual values you should use : " << endl;

    //-----------------------------------------
    for (int &i : v)
    {
        i++;
    }
    for (int i : v)
        cout << i << " ";
    cout << "\n"
         << flush;

    // till now we came to know that the range based for loop redeuces the work of declaring the iterator and derefencing the pointer coz the i points to the value directly, also reduces updation and the conditon check of begin() and end(), but still the declaration of i with changing data type remains to reduce the work of data type declaration every time we change the container we use "auto " keyword.
    cout << "here is the best declaration of iterator " << endl;
    for (auto i : v)
        cout << i << endl;

    cout << "for pairs : " << endl;
    for (auto &it : vp)
    {
        cout << it.first << " " << it.second << endl;
        // please note that we dont use it->first like we used in the iterator for loop . this is because we point to value not the address.
    }

    return 0;
}