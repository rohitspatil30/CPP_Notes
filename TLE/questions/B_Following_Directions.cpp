#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    string s;
    ll n;
    cin >> n;
    cin >> s;

    ll x1 = 0;
    ll y1 = 0;
    ll x2 = 1;
    ll y2 = 1;
    bool flag = 0;
    for (ll i = 0; i < n; i++)
    {

        if (s[i] == 'U')
        {
            y1 += 1;
        }
        else if (s[i] == 'R')
        {
            x1 += 1;
        }
        else if (s[i] == 'L')
        {

            x1 -= 1;
        }
        else if (s[i] == 'D')
        {
            y1 -= 1;
        }
        if (x1 == x2 && y1 == y2)
        {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
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
