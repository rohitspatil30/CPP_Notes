/*
int arr[rows][columns]-> 2 d array

traversing : row loop  { column loop{} }
for(int i = 0;i<rows ;i++){
    for(int j = 0;ij<columns;j++){
        access>>/<<arr[i][j];
    }
}

row major :
int arr[][] = {1,2,3,4,5,6,7,8,9}
will be represented as :
1 2 3
4 5 6
7 8 9

similarly if the size is declared and no value declred then is made equal to 0 .

int arr[][3]={{1,2},{3,4}} compiler understands that there are 2 rows and there are 3 columns out of which 2 are specified. the third is automatically assigned as  {0,0}.

the matrix will look like :

1 2
3 4
0 0

also ,

int arr[][]={{1,2},{3,4},{5,6}}
compiler understand that this is a 2 x 3 matrix .
you can use variables to assign the size;.

int n = 5;
int arr[ n ];
*/

// matrix using fixed array :
/*

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    // int arr[3][2] = {{10, 20},
    //                  {30, 40},
    //                  {50, 60}}; // manual row wise assignment

    // user input :
    int rows;
    int cols;
    cout << "enter the number of rows you want : ";
    cin >> rows;
    cout << "enter the number of columns you want : ";
    cin >> cols;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "enter the value in the matrix for the arr[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) // row loop
    {
        for (int j = 0; j < cols; j++) // column loop
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n"
             << flush;
    }

    return 0;
}

*/

// variable assigned :
/*
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

int main()
{
    int m = 5, n = 8;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n"
             << flush;
    }

    return 0;
}
*/

// double pointer:
/*
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int **arr;

    arr = new int *[m]; // dynamically assigned matrix

    for (int i = 0; i < m; i++)
        arr[i] = new int[n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;

            cout << arr[i][j] << " ";
        }
    }

    return 0;
}
*/

// array of pointer :
/*
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

int main()
{
    int m = 3, n;

    int *arr[m];
    // in this we are making a array where every index is the pointer.
    for (int i = 0; i < m; i++)
    {
        cout << "Enter the number of columns you want in this array : ";
        cin >> n;
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // here we are making the heap allocation for the array

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << "\n"
             << flush;
    }

    return 0;
}
*/

// array  of vector :
/*
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;


int main()
{
    int m = 3, n = 2;

    vector<int> arr[m];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[i].push_back(10);
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }


    return 0;
}
*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

int main()
{
    int m = 3, n = 2;

    vector<vector<int>> arr;

    for (int i = 0; i < m; i++)
    {
        vector<int> v;

        for (int j = 0; j < n; j++)
        {
            v.push_back(10);
        }

        arr.push_back(v);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}