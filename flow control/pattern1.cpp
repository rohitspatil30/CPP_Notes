#include <iostream>

using namespace std;

int main()
{
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    // =================================================

    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }
    // ========================================

    // 1 2 3
    // 4 5 6
    // 7 8 9

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << count << " ";
    //         count += 1;
    //     }
    //     cout << "\n";
    // }

    // ============================================

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count += 1;
    //     }
    //     cout << "\n";
    // }

    // ================================================

    // 1
    // 1 2
    // 1 2 3

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    // =================================================

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << "\n";
    // }

    // ================================================
    // *
    // * *
    // * * *
    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // ===============================================

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // 5 6 7 8 9

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j < 2 * i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    // ====================================================

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    // int i, j, n;
    // cout << "enter the number of the columns: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }
    // ===============================================

    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    int n;
    cout << "enter the number of the columns: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }

        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = n + 1 - i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}