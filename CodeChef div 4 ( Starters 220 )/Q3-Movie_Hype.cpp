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
    vector<int>a(n+1);
    for(auto &x : a) {
        cin>>x;
    }
    int res = INT_MAX;
    for(int i=0;i<n;i++) {
        int x=max(a[i],a[i+1]);
        res = min(res,x);
    }
    cout<<res<<nl;
   }
   return 0;
}