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
    int curr=0,mx=0;
    for(int i=0;i<n;i++) {
        if(a[i]>=1) {
            curr++;
            mx=max(mx,curr);
        } else {
            curr=0;
        }
    }
    cout<<mx<<nl;
   }
   return 0;
}