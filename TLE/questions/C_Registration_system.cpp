#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    ll n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] > 0)
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
        else
        {
            mp[s]++;
            cout << "OK" << endl;
        }
        // cout << s << endl;
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

    ll test;
    // cin >> test;
    // while (test--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
