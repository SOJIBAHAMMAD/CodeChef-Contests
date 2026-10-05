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
    vector<int>a(n),b(n);
    for(auto &x:a) {
        cin>>x;
    }
    for(auto &x:b) {
        cin>>x;
    }
    int sum=0;
    int loss=INT_MAX;
    for(int i=0;i<n;i++) {
        sum += a[i];
        loss=min(loss,a[i]-b[i]);
    }
    cout<<sum-loss<<nl;
   }
   return 0;
}