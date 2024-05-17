#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a + b) == c)
        cout << "+" << endl;
    else if ((a - b) == c)
        cout << "-" << endl;
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
