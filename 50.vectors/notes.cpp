/*
why do we need vectors ?
sometimes when we create an array the size is declared more than usually reqiured ,just to make sure that the size does fall short of usage , because  if that case happens there won;t be any other optionbut to create an array with more size because ARRAY HAS FIXED SIZE.

so to overcome this problem of fixed size c++ stl have a new library  of ynammic array called as VECTORS.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // declaration of the vector
    vector<int> rohit;
    int option = 1;
    int push;
    int index;
    // ^    ^     ^
    // |    |     |
    // vector   |   name of
    // type    |  the vector
    //  data type of the vector

    // OR
    // vector<int> * vp =new vector<int>();//dynammic

    // ====================================

    // operation on vector
    // manual data inout and data output
    // rohit.push_back(1);
    // rohit.push_back(2);
    // rohit.push_back(3);
    // cout << rohit[0] << " " << rohit[1] << " " << rohit[2] << "";

    // rohit [2]=5;//manual data modification
    // ================================================

    // taking user input and displaying using a for loop.

    while (option > 0)
    {
        cout << "\n\n\n\nenter the  option \n1)insert data \n2)modification \n3)deltion \n4)exit:  ";
        cin >> option;
        switch (option)
        {
        case 1:

            cout << "\n\nenter the number you want to push back : ";
            cin >> push;
            rohit.push_back(push);
            // dont use [] to insert element.
            // always use push back to insert element because  it include the number in the vector and accordingly increase the size.
            cout << "\n\nyour vector look like this";
            for (int i = 0; i < rohit.size() /*std::size(rohit)*/; i++)
            {
                cout << "\n";
                // cout << rohit[i] << " ";//rohit[i]: will also print the garbage value ..
                // so
                cout << rohit.at(i) << " ";
            }
            break;
        case 2:

            cout << "\n\n\nenter the new number : ";
            cin >> push;
            cout << "enter the index number : ";
            cin >> index;
            rohit[index] = push;
            cout << "\n\nyour vector look like this";
            for (int i = 0; i < std::size(rohit); i++)
            {
                cout << "\n";
                cout << rohit[i] << " ";
            }
            break;

        case 3:
            rohit.pop_back();
            for (int i = 0; i < std::size(rohit); i++)
            {
                cout << "\n";
                cout << rohit[i] << " ";
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "invalid input";
        }
    }
}