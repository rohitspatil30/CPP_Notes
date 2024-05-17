#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    ll k, s, x, y, z;
    ll count = 0;
    cin >> k >> s;
    for (ll i = 0; i <= k; i++)
    {
        for (ll j = 0; j <= k; j++)
        {
            x = i, y = j;
            z = s - x - y;
            if (z >= 0 && z <= k)
            {
                count++;
            }
        }
    }
    cout << count << endl;
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
