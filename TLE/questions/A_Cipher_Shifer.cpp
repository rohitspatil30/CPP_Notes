#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s; // abca  ===> a
        string ans = "";
        ans += s[0];
        char temp = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != temp)
            {
                continue;
            }
            else if (s[i] == temp)
            {
                i++;
                temp = s[i];
                ans += s[i];
                continue;
            }
        }
        cout << ans << endl;
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

    // ll test=1;
    // cin>>test;
    //  while(test--)
    //  {
    solve();
    // }
    return 0;
}
