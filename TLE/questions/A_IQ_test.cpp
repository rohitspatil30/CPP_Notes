#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    ll n;
    cin >> n;
    unordered_map<string, pair<int, int>> mp;
    mp["even"].first = 0;  // count
    mp["even"].second = 0; // index
    mp["odd"].first = 0;   // count of odd number
    mp["odd"].second = 0;  // index of odd number
    for (int i = 1; i <= n; i++)
    {
        ll num;
        cin >> num;
        if (num % 2 == 0)
        {
            mp["even"].first++;
            mp["even"].second = i;
        }
        else if (num % 2 != 0)
        {
            mp["odd"].first++;
            mp["odd"].second = i;
        }
        if (mp["even"].first > 1 && mp["odd"].first == 1)
        {
            cout << mp["odd"].second << endl;
            break;
        }
        else if (mp["even"].first == 1 && mp["odd"].first > 1)
        {
            cout << mp["even"].second << endl;
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
