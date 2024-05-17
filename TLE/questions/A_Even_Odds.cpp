#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{

    ll n,k;
    vector<int> v1;
    vector<int> v2;
    for(ll i=0;i<n;i++){
        ll num;
        cin>>num;
        if(num%2!=0){
            v2.push_back(num);
        }
        else (v1.push_back(num));
    }
    


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
