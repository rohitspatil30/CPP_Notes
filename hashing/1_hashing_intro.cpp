// hashing is mainly used to implementdictionaries where we have key value pairs :
/*
hashing is the processof mapping the keys to the values in the data structure called as the hash table.
hash function is the function which is used to map the keys to the values, it generates the hash index where you can map the keys.

all the operation s in the hash map take time omplexity of O(1).
such as : search, insert, delete. best scenenarios

insertion  : inserting the values in the map, if existing already then it overwrites the avaliable value .

search :  search in the table for the key.

delete : deleting the keys and the values associated to it.

in hashing the printing the elements in the sorted ordered.

not useful when  :

finding closest value ,
keeping the data in sorted order.

we use avl, red - black trees

prefix searching : trie data structure.

applications : hash tables are used extensively in computer science, probably most after the arrays .

1) implenting dictionary
2) database indexing : to quickly find the records .
using B/B+ trees or hashing .
3) cryptography : login and password are stored by generating the hash of the password.
4)caches
5) symbol tables : store the variables are valid or not, symbol tables are nothing but the hash table.
6) wi-fi routers
7) getting data from databases.

// ------------------------------------------

direct address table : we have 1000 keys from 0 to 999
we will create a boolean array with the size equal to the available numbers , so arr[1000].
and now whichever number comes we will mark that index to "set" that is one and whenever we wnt to see if that number is present or not then you just see if that index is set or not if set then it is present else it is unset.

same goes with deletion make the set bit unset

and for insertion make the uset bit as set .

but now when we have used the array to solve insertion problem in O(1). still there is one problem here we are wasting a lot of memory to strore some values in O(1) time that is to reduce the time complexity we have wasted a lot of memory.

so , to overcome this problem we use hash function in hash table which reduces the key itself according to the size of the table which is much smaller than array size.

but yet there might be some scenarios where there might be two or more numbers which qualify for the same slot as the size is reduced there mightbe a case.

this i called as the collision , to reslove this collision we have collision resoltuion techniques such as open hashing or closed addressing and closed hasing or open addressing.

--------------------------------------------

hash function :

hash function are simple mathematical formulas which convert the keys to small values called as index so that the keys could be mapped into the hash table along with the values associted with it.

how should hash funciton work ?
should always map the large key to same bucket of hash table.
should generate values from 0 to m -1
should be fast and easy , O(1) for the integer and the O(len) for string
the hash function should evenly distribute the keys across table .

some hashing techniques :
mid square : h(k*k)
division : h(k % m)
multiplication
digit folding .

we choose prime numbers which are not close to powers to evenly distribute the elements

*/
#include <iostream>
#include <string>

const int TABLE_SIZE = 128;

class HashNode
{
public:
    std::string key;
    int value;
    HashNode *next;
    HashNode(std::string key, int value)
    {
        this->key = key;
        this->value = value;
        this->next = NULL;
    }
};

class HashTable
{
private:
    HashNode **table;

public:
    HashTable()
    {
        table = new HashNode *[TABLE_SIZE]();
    }
    int hashFunction(std::string key)
    {
        int hash = 0;
        for (int i = 0; i < key.length(); i++)
        {
            hash = (hash + (int)key[i]) % TABLE_SIZE;
        }
        return hash;
    }
    void insert(std::string key, int value)
    {
        int hash = hashFunction(key);
        if (!table[hash])
        {
            table[hash] = new HashNode(key, value);
        }
        else
        {
            HashNode *entry = table[hash];
            while (entry->next)
            {
                entry = entry->next;
            }
            entry->next = new HashNode(key, value);
        }
    }
    int search(std::string key)
    {
        int hash = hashFunction(key);
        if (table[hash])
        {
            HashNode *entry = table[hash];
            while (entry)
            {
                if (entry->key == key)
                {
                    return entry->value;
                }
                entry = entry->next;
            }
        }
        return -1;
    }
};

int main()
{
    HashTable ht;
    ht.insert("hello", 1);
    ht.insert("world", 2);
    std::cout << ht.search("hello") << std::endl;
    std::cout << ht.search("world") << std::endl;
    return 0;
}
