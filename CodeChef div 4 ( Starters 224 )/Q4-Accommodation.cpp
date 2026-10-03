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
    ll b,g,x,y,n;
    cin>>b>>g>>x>>y>>n;
    if(x+y>n) {
        cout<<-1<<nl;
        continue;
    }
    ll a=b+g;
    ll res=(a+n-1)/n;
    if(b>=res*x && g>=res*y) {
        cout<<res<<nl;
    } else {
        cout<<-1<<nl;
    }
   }
   return 0;
}