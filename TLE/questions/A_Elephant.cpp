#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{

    ll n;
    cin >> n;
    ll steps = 0;
    if (n / 5 > 0)
    {
        steps += n / 5;
        n %= 5;
    }
    if (n / 4 > 0)
    {
        steps += n / 4;
        n %= 4;
    }
    if (n / 3 > 0)
    {
        steps += n / 3;
        n %= 3;
    }
    if (n / 2 > 0)
    {
        steps += n / 2;
        n %= 2;
    }
    if (n / 1 > 0)
    {
        steps += n / 1;
        n %= 1;
    }
    cout << steps << endl;
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
