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
        if (i == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j];
                if (j == cols - 1)
                {
                    for (int k = 1; k < rows; k++)
                    {
                        cout << arr[k][j];
                    }
                }
            }
        }
        else if (i == rows - 1)
        {
            for (int j = cols - 1; j >= 1; j--)
            {
                cout << arr[i][j];
                if (j == 0)
                {
                    for (int k = rows - 2; k >= 1; k--)
                    {
                        cout << arr[i][k];
                    }
                }
            }
        }
    }

    return 0;
}