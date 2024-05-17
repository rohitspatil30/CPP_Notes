#include <iostream>
#include <fstream>

using namespace std;

// without class :

int main()
{
    string s;
    cout << "enter the name of the file: ";
    cin >> s;

    ofstream outfe;

    outfe.open(s);
    string name;
    string fname[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "name : " << endl;
        cin >> name;
        fname[i] = name;
    }

    for (int i = 0; i < 4; i++)
    {
        outfe << fname[i] << endl;
        // outfe << name << endl; // this will only print the last name stored 4 times
    }
}
