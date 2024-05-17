#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{

    string s;
    cin >> s;
    ll a = static_cast<int>(s[0]) - 48;
    ll b = static_cast<int>(s[2]) - 48;
    cout << a + b << endl;
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
