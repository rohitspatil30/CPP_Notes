#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
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

    // ll test = 1;
    // // cin>>test;
    // while (test--)
    // {
    //     solve();
    // }

    ll t, n, m, x, y, p, q, i, j, k, answer = 0;
    ll max_depth = 0, first_index = -1;
    cin >> n;
    vector<ll> a(n);

    ll curr_val = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            curr_val++;
            if (curr_val > max_depth)
            {
                max_depth = curr_val;
                first_index = i + 1;
            }
        }
        else
        {
            curr_val--;
        }
    }

    cout << max_depth << " " << first_index << " ";

    ll max_length = 0;
    first_index = -1;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            curr_val = 0;
            ll len = 0;
            for (j = i; j < n; j++)
            {
                if (a[j] == 1)
                {
                    curr_val++;
                }
                else
                {
                    len += 2;
                    curr_val--;
                }
                if (curr_val == 0)
                    break;
            }
            if (len > max_length)
            {
                max_length = len;
                first_index = i + 1;
            }
            i = j;
        }
        cout << max_length << " " << first_index;
    }
    return 0;
}
