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
    bool flag=true;
    for(int i=0;i<n;i++) {
        if(a[i]!=a[0]) {
            flag=false;
            break;
        }
    }
    if(flag) {
        cout<<"YES"<<nl;
        continue;
    }
    ll sum=0;
    for(auto &x:a) {
        sum+=x;
    }
    if(n%2==0 && sum%n==0) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
   }
   return 0;
}