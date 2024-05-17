#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007

ll sum(ll v, ll n)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += v[i];
    }
    return sum;
}
void solve()

{

    ll n;
    cin >> n;
    ll v[n];
    ll num;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v + n);
    ll total = sum(v, n);

    ll count = 0;
    ll temp = 0;
    for (ll i = n - 1; i >= 0; i++)
    {
        temp += v[i];
        total -= temp;
        count++;
        if (temp > total)
        {
            cout << count << endl;
            break;
        }
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
