/*
string is a sequence of character, the string is a data set of
*/
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{

    // c-strings : char c[]={'r','o','t','\0};

    // char s[] = {'w', 'i', 'n'};
    // there is no \0 null character so the compiler would keep printing till it finds \0.

    // better way:
    // char s[] = {"win"}; // compiler takes care of putting the \0 at the end of the string .

    char c[] = {"rohit"};
    cout << strlen(c) << endl;
    cout << sizeof(c) << endl; // including \0.

    // so when declaring a complete string the compiler will print the \0 at the end all by itself without considering the length but will increase the size.

    // but while you declare char by char then use \0 to end the string manually.
    /*c-string functions :
    1) strlen : length
    2) strcmp(str,str1) :  gives lexographically greater string
    3) strcpy(into string, from string)


    */

    // best way
    string s = "win"; // no array needed
    cout << s << endl;

    string s2 = "lose";

    cout << s2.size() << endl;
    s.append("ok bye"); // adds the string at last
    cout << s << endl;
    s += " good night"; // adds the string at last
    cout << s << endl;
    s.clear(); // empty string
    // s.insert(s.begin(),"rohit patil is a bad boy ");
    s.push_back('p');
    s.push_back('o');
    s.append("** mat dekho yaar");
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.length() << endl;     // both are same
    cout << s.substr(3, 7) << endl; // prints [)
    cout << s.find("mat") << endl;  // gives the  index where it starts, first occurance
    cout << boolalpha << (s > s2) << endl;

    // reading strings :
    // cin >> s2;
    // cout << "the cin fucntion output : " << s2 << endl;

    // as noticed the cin function will only take the string upto first non-white spaced character then it will break so to take the full output we use getline function.

    std::getline(cin, s2 /*,specify when you want to stop example :$*/, '$');
    cout << "the getline function output : " << s2 << endl;
    for (auto i : s2)
        cout << i;
    cout << "\n"
         << endl;
    return 0;
}