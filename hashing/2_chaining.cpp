/*
linked list is maintained in chaining where the elements with same hash index are added to the bucket :

insertion searching and deletion time in the linked list is O(n).

performance in chaining :

m : slots
n : keys

load factor : n/m;


*/
// implementations :

// #include <bits/stdc++.h>

// using namespace std;

// struct Hash
// {

//     int BUCKET;
//     list<int> *table;
//     Hash(int b)
//     {
//         BUCKET = b;
//         table = new list<int>[b];
//     }

//     void insert(int key)
//     {
//         int i = key % BUCKET;
//         table[i].push_back((key));
//     }

//     void remove(int key)
//     {
//         int i = key % BUCKET;
//         table[i].remove(key);
//     }

//     bool search(int key)
//     {
//         int i = key % BUCKET;
//         for (auto x : table[i])
//         {
//             if (x == key)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };
// // Driver method to test Map class
// int main()
// {
//     Hash mh(7);
//     mh.insert(10);
//     mh.insert(20);
//     mh.insert(15);
//     mh.insert(7);
//     cout << mh.search(10) << endl;
//     mh.remove(15);
//     cout << mh.search(15);
// }

// CPP program to implement hashing with chaining
#include <bits/stdc++.h>
using namespace std;

class Hash
{
    int BUCKET; // No. of buckets

    // Pointer to an array containing buckets
    list<int> *table;

public:
    Hash(int b) // Constructor
    {
        this->BUCKET = b;
        table = new list<int>[BUCKET];
    }

    // inserts a key into hash table
    void insertItem(int key)
    {
        /*
        this function simply calls the "hashfunction" fucntion to return the index and then push or ad a node to that particular slot
        */
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    // deletes a key from hash table
    void deleteItem(int key)
    {
        // get the hash index of key
        int index = hashFunction(key);

        // find the key in (index)th list
        list<int>::iterator i;
        for (i = table[index].begin();
             i != table[index].end(); i++)
        {
            if (*i == key)
                break;
        }

        // if key is found in hash table, remove it
        if (i != table[index].end())
            table[index].erase(i);
    }

    // hash function to map values to key
    int hashFunction(int x)
    {
        return (x % BUCKET);
    }

    // function to display hash table
    void displayHash()
    {
        for (int i = 0; i < BUCKET; i++)
        {
            cout << i;
            for (auto x : table[i])
                cout << " --> " << x;
            cout << endl;
        }
    }
};

// Driver program
int main()
{
    // array that contains keys to be mapped
    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);

    // insert the keys into the hash table
    Hash h(7); // 7 is count of buckets in
               // hash table
    for (int i = 0; i < n; i++)
        h.insertItem(a[i]);

    // delete 12 from hash table
    // h.deleteItem(12);

    // display the Hash table
    h.displayHash();

    return 0;
}