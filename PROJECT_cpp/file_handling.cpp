// #include <fstream>
// #include <iostream>
// #include <ios>

// using namespace std;

// int main()
// {

//     /*
//     creating file : suiteable name for the file
//     data and its purpose
//     openiing method .
//     */

//     string s;
//     cout << "enter the name of the file : ";
//     cin >> s;
//     // test.txt;

//     //<fstream> <oofstream> <ifstream>

//     // opening method
//     // 1)using  constructor method :
//     // 2) using open() function

//     // method 1) constructor : used when we need to handle onefile only .
//     // constructor  :  make an object

//     // ofstream : used to write in the file

//     // ifstream : used to read from the file .

//     /*
//     in this method we mostly create an object for ofstream that is for writing in the file .

//     example:
//     */

//     ofstream out(s); // writing in the file

//     out.close();

//     // method 2:
//     // mange multiple files using sinlge ipen function,

//     // file_streamclass stream_object;
//     ofstream outs;
//     outs.open("r");

//     outs.close();

//     outs.open("t"); // second file.
//     outs.close();

//     // similarly using  the ifdtream method

//     ifstream in(s); // reading fron  the file

//     //----------------------------------------------------------
// }

// ===============================================================================================
// ===============================================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#define SIZE 5

using namespace std;

class student_details
{
private:
    int rollno;
    int coa;
    int ads;
    int cs;
    int flat;
    int oops;
    string name;

public:
    void display();
} st, student[SIZE];

void student_details::display()
{

    ofstream out;

    int rollno;
    int coa;
    int ads;
    int cs;
    int flat;
    int oops;
    string name;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "enter your name: ";
        cin >> student[i].name;

        cout << "enter your roll number: ";
        cin >> rollno;
    }
}
int main()
{
    string s;
    // int age;
    string name;
    // int marks[SIZE];
    cout << "enter the name of your file: ";
    cin >> s;

    ofstream out;
    out.open(s);

    out.close();

    ifstream in;

    in.close();
}
