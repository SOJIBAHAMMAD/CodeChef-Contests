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
    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int sum=0,ans=INT_MAX;
    for(int i=0;i<n-1;i++) {
        sum = a[i]+a[i+1];
        ans = min(ans,sum);
    }
    cout<<ans<<nl;
   }
   return 0;
}