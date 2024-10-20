#include <iostream>
#include <map>
#include <iterator>
#include <stdio.h>

using namespace std;

int main()
{ /*
 question : given n string , your task is to print the unique strings in leographical order and the number of times theyt have occured.
 */

    int n;
    cin >> n;           // number of strings
    map<string, int> m; // string is the key anf int is the frequency they have occured.

    string s;
    for (int i = 0; i < n; i++)
    {
        // whenever we hace to store the value in the lexographical order we always use maps and not unordered maps .
        cin >> s;
        m[s]; // this will set the value 0 for the key .
        // but we have to set the first occurance of every key as one so,
        // m[s] += 1;
        m[s]++;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // difference between maps and unordered maps .
    // declarations.

    return 0;
}