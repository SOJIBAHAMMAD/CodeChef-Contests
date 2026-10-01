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
    vector<ll>a(n),b(n);
    for(auto &x:a) {
        cin>>x;
    }
    for(auto &x:b) {
        cin>>x;
    }
    bool flag=true;
    ll mx=INT_MIN;
    for(int i=0;i<n;i++) {
        if(b[i]<a[i]) {
            flag=false;
            break;
        }
        if(mx<b[i]) {
            flag=false;
            break;
        }
        mx=max(mx,b[i]);
    }
    if(flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }

   }
   return 0;
}