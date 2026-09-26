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
    vector<ll>a(n);
    for(auto &x : a) {
        cin>>x;
    }
    vector<vector<ll>> dpMin(n,vector<ll>(n));
    vector<vector<ll>> dpMax(n,vector<ll>(n));
    for(int i=0;i<n;i++) {
        dpMin[i][i]=dpMax[i][i]=a[i];
    }
    for(int i=2;i<=n;i++) {
        for(int j=0;j+i-1<n;j++) {
            int x = j+i-1;
            dpMin[j][x]=LLONG_MAX;
            dpMax[j][x]=LLONG_MIN;
            for(int k=j;k<x;k++) {
                ll mn_val = dpMin[j][k]+ 2*dpMin[k+1][x];
                ll mx_val = dpMax[j][k]+ 2*dpMax[k+1][x];

                dpMin[j][x]= min(dpMin[j][x],mn_val);
                dpMax[j][x]= max(dpMax[j][x],mx_val);
            }
        }
    }
    cout<<dpMin[0][n-1]<<" "<<dpMax[0][n-1]<<nl;
   }
   return 0;
}