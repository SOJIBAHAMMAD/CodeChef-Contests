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
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(auto &x:a) {
        cin>>x;
    }
    for(auto &x:b) {
        cin>>x;
    }
    sort(b.begin(),b.end());
    ll count=0;
    for(int i=0;i<n;i++) {
        count+= lower_bound(b.begin(),b.end(),a[i])-b.begin();
    }
    cout<<count<<nl;
   }
   return 0;
}