#include <iostream>

using namespace std;

int main()
{

    int rows;
    int cols;
    cout << "Enter  the number of " << endl;
    cout << "rows: ";
    cin >> rows;
    cout << "columns : ";
    cin >> cols;
    int arr[rows][cols];

    // taking input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the value for the index arr[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> arr[i][j];
        }
    }
    // displaying the matrix ;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n"
             << flush;
    }

    // displaying the matrix in snake pattern
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}