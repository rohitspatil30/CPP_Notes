#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstOccur(vector<int> v, int key)
{
    sort(v.begin(), v.end());
    int start = 0;
    int end = v.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (v.at(mid) == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (v.at(mid) < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int lastOccur(vector<int> v, int key)
{
    sort(v.begin(), v.end());
    int start = 0;
    int end = v.size() - 1;

    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (v.at(mid) == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (v.at(mid) < key)
        {
            start = mid + 1;
        }
        else if (v.at(mid) > key)
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> v;
    int option = 1, num;
    int key, first, last;
    cout << "enter the value in the vector: ";
    while (option > 0)
    {
        cout << "\n\ndo you want to insert an element: \n1)yes\n2)no";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "\n\nenter the element: ";
            cin >> num;
            v.push_back(num);
            break;
        case 2:
            cout << "\nyou entered no\n";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v.at(i) << " ";
            }
            cout << "\nEnter the element you want to search: ";
            cin >> key;

            first = firstOccur(v, key);
            cout << "\nthe first occurance is at: " << first << endl;
            last = lastOccur(v, key);
            cout << "\nthe last occurance is at: " << last << endl;
            cout << "total occurances: " << last - first + 1 << endl;
            exit(0);
        }
    }
}