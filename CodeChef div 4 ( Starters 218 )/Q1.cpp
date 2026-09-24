#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,a,m,b;
   cin>>n>>a>>m>>b;
   int ans = m*b - n*a;
   if(m*b < n*a) {
    cout<<ans<<nl;
   }  else {
    cout<<ans<<nl;
   }
   return 0;
}
