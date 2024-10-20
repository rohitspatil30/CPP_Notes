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

    cout << "\n\n The transpose of the Matrix  is : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n"
             << flush;
    }

    return 0;
}