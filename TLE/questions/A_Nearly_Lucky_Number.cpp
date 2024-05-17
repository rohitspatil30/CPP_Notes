#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{

    ll n;
    cin>>n;
    ll count =0;
    while(n>0){
        if((n%10==4)|| (n%10==7)){
            count++;
        }
        n/=10;
    }
    if(count==4 || count==7)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE

//     freopen("input.txt", "r", stdin);

//     freopen("output.txt", "w", stdout);

// #endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
