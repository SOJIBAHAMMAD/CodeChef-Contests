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
    for(auto &x:a) {
        cin>>x;
    }
    unordered_map<int,int>dp;
    int res=0;
    for(auto &x:a) {
        if(x==1) {
            dp[x]++;
            res=max(res,dp[x]);
        } else if(dp[x-1]>0) {
            dp[x]=max(dp[x-1]+1,dp[x]);
            res=max(res,dp[x]);
        }
    }
    cout<<res<<nl;
   }
   return 0;
}