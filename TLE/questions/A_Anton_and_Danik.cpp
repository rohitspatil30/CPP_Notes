#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int A = 0;
    int D = 0;
    if (n == 0)
        cout << "Friendship" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                A++;
            else if (s[i] == 'D')
                D++;
        }
        if (A > D)
            cout << "Anton" << endl;
        else if (D > A)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE

    //     freopen("input.txt", "r", stdin);

    //     freopen("output.txt", "w", stdout);

    // #endif

    // ll test = 1;
    // // cin>>test;
    // while (test--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
