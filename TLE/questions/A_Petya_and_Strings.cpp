#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
    /*
    make two variables : sum1 and sum2 for respecctive strings now the next task is to run a for loop, here we will add the ascii value of the  cahracters in the variables if the variale is a captital letter then we will add 32 to its ascii value and add it to the variable

    why 32?


    */

    string s1;
    string s2;
    cin>>s1>>s2;
    

    ll num = 0;
    ll sum1 = 0;
    ll sum2 = 0;

    ll n = s1.size();

    // cout << s1 << " " << s2 << endl;

    for(ll i=0;i<n;i++){
        ll lower = tolower(s1[i]);
        ll lower2 = tolower(s2[i]);
        sum1+=lower;
        sum2+=lower2;
    }
    // cout<<sum1<<" "<<sum2<<endl;
    if(sum1<sum2){
        cout<<-1<<endl;
    }
    if(sum2<sum1){
        cout<<1<<endl;
    }
    else if(sum1==sum2){
        cout<<0<<endl;
    }

    /***
     * for (ll i = 0; i < n; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            sum1 += (s1[i] + 32);
            continue;
        }
        else if (s1[i] >= 97 && s1[i] <= 122)
        {
            sum1 += s1[i];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (s2[i] >= 65 && s2[i] <= 90)
        {
            sum2 += (s1[i] + 32);
            continue;
        }
        else if (s2[i] >= 97 && s2[i] <= 122)
        {
            sum2 += s2[i];
        }
    }

    cout<<sum1 << " "<<sum2<<endl;
    */
    
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
