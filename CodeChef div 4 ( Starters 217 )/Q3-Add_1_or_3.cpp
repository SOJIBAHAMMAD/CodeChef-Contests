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
    ll n,m;
    cin>>n>>m;
    if(m>=n && m <= 3*n && (m-n)%2==0) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
   }
   return 0;
}