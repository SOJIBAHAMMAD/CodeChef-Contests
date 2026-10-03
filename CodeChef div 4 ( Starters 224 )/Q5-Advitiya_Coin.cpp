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
    int n,k;
    cin>>n>>k;
    vector<int>p(n);
    for(auto &x:p) {
        cin>>x;
    }
    ll mx=p[0];
    ll mn=p[0];
    int ans=0;
    for(int i=1;i<n;i++) {
        ll x=p[i];
        mx=max(mx,x);
        mn=min(mn,x);
        if(x-mn>k) {
            ans++;
            mx=x;
            mn=x;
        } else if(mx-x>k) {
            ans++;
            mx=x;
            mn=x;
        }
    }
    cout<<ans<<nl;
   }
   return 0;
}