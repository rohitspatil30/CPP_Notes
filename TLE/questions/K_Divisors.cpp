#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << "\n";
    }
    cout << "\n";
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    // // #ifndef ONLINE_JUDGE

    // //     freopen("input.txt", "r", stdin);

    // //     freopen("output.txt", "w", stdout);

    // // #endif

    // ll test = 1;

    // while (test--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
