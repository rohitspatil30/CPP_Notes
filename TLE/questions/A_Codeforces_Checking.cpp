#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    string cf = "codeforces";
    unordered_map<char, int> mp;
    int n = cf.size();
    for (int i = 0; i < n; i++)
    {
        mp[cf[i]]++;
    }
    char s;
    cin >> s;
    if (mp[s] > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
