#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007
void solve()

{
 ll a,b,c;
 cin>>a>>b>>c;
//  cout<<a<<b<<c<<endl;
int ans = a + b + c;
ans = (ans>=(a + b) * c)?ans:(a + b) * c;
	ans = (ans>=a * (b + c))?ans:a * (b + c);
	ans = (ans>=a * b * c)?ans:a * b * c;

	cout << ans << endl;
/***
 * 
 * 2 + 10 * 3 --> 32
 * 2 * 10 + 3---> 23
 * (2+10)*3 --> 36
 * 2+(10*3)---> 32
 * 2* ()
*/

// cout<<max5<<endl;

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
