#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 >= l2 && r1 >= r2)
    {
        if (l1 >= r2)
        {
            cout << -1 << endl;
            exit(0);
        }
        else
        {
            cout << l1 << " " << r2 << endl;
        }
    }
    else if (l1 <= l2 && r1 >= r2)
    {
        cout << l2 << " " << l2 << endl;
        exit(0);
    }
    else if (l1 <= l2 && r1 <= r2)
    {
        if (r1 <= l2)
        {
            cout << -1 << endl;
            exit(0);
        }
        else
        {
            cout << l2 << " " << r1 << endl;
        }
    }
    else if (l1 >= l2 && r1 <= r2)
    {
        cout << l1 << " " << r1 << endl;
        exit(0);
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

    ll test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
