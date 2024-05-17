#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{

    string s;
    cin >> s;
    string ans = "";
    ll n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y')
        {
            continue;
        }
        if (s[i] >= 65 && s[i] <= 90)
        {
            ans += (tolower(s[i]));
        }
        else
        {
            ans += (+s[i]);
        }
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        cout << "." << ans[i];
    }
    if (ans.size() == 0)
    {
        cout << ".";
    }
    cout << endl;
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
