#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    if(n==2) {
        cout<<0<<nl;
        continue;
    }
    ll diff=0;
    for(ll i=0;i<n-1;i++) {
        diff = __gcd(diff,a[i+1]-a[i]);
    }
    ll ans=0;
    for(ll i=0;i<n-1;i++) {
        ll x = a[i+1] - a[i];
        ll y = (x-1)/diff;
        ans += y;
    }
    cout<<ans<<nl;
   }
   return 0;
}