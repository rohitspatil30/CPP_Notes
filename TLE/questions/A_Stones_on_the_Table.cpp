#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        // cout << s[i] << " " << s[i + 1] << endl;

        if (s[i] == s[i + 1])
        {
            // cout << s[i] << " " << s[i + 1] << endl;
            count++;
        }
        else if (s[i] != s[i + 1])
            continue;
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
