/*
O(n^2) or theta(n^2), less memeory writes , more optimal is cycle sort.

*/
// it has a basic idea for the heap short
// thisis not stable
// this is in place algorithm

#include <iostream>
#include <vector>

using namespace std;

void intsort(vector<int> v)
{
    int min;
    for (int i = 0; i < v.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v.at(min) > v.at(j))
            {
                min = j;
            }
        }
        swap(v.at(min), v.at(i));
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    int max;
    cout << "\n\nnow printing the array in desending order: \n";
    for (int i = 0; i < v.size() - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v.at(max) < v.at(j))
            {
                max = j;
            }
        }
        swap(v.at(max), v.at(i));
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}

void swapsort(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {

        for (int j = i + 1; j < v.size(); j++)
        {
            if (v.at(i) > v.at(j))
            {
                swap(v.at(i), v.at(j));
            }
        }
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << "\n\n now sorting the element in descending order: ";
    for (int i = 0; i < v.size() - 1; i++)
    {

        for (int j = i + 1; j < v.size(); j++)
        {
            if (v.at(i) < v.at(j))
            {
                swap(v.at(i), v.at(j));
            }
        }
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}

int main()
{
    vector<int> v;
    int num = 1, value;
    cout << "\nenter the values in the vector: ";
    while (num > 0)
    {
        cout << "\ndo you want to enter the element: ";
        cout << "\n1)yes\n2)no:";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "\nenter the value: ";
            cin >> value;
            v.push_back(value);
            break;
        case 2:
            cout << "\nyou enterd no: ";
            num = -5;
        }
    }
    int option = 1;

    while (option > 0)
    {
        cout << "\n\nenter the type of selection sort : \n1)using integer \n2)using swap \n3)exit: ";
        cin >> option;
        switch (option)
        {
        case 1:
            intsort(v);
            break;
        case 2:
            swapsort(v);
            break;
        case 3:
            exit(0);
        default:
            cout << "\ninvalid input: ";
        }
    }
}
