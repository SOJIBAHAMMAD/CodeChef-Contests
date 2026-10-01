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
    int n,x,k;
    cin>>n>>x>>k;
    int res=x;
    for(int i=0;i<=n;i+=k) {
        int a=abs(i-x);
        res=min(res,a);
    }
    cout<<res<<nl;
   }
   return 0;
}