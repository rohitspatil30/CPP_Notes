#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
bool solve()

{
    string s;
    cin >> s;
    ll n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                return false;
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
                st.pop();
            else
                return false;
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
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

    ll test = 5;
    // cin>>test;
    while (test--)
    {
        cout << boolalpha << solve() << endl;
    }
    return 0;
}
