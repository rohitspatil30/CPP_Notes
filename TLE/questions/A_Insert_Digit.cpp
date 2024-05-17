#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    ll size = s.size();
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        if (int(s[i]) <= int(c))
        {
            v.insert(v.begin() + i, c);
            i++;
        }
        else
        {
            v.push_back(s[i]);
        }
    }
    for (auto i : v)
        cout << i;
    cout << "\n";
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
