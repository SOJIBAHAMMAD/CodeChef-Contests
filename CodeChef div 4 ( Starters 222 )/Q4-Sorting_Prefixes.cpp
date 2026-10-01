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
    vector<int>a(n+1),b(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        b[a[i]]=i;
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(b[i]>i) {
            ans = max(ans,b[i]);
        }
    }
    if(ans==0) {
        cout<<0<<nl;
    } else {
        cout<<a[ans]<<nl;
    }
   }
   return 0;
}