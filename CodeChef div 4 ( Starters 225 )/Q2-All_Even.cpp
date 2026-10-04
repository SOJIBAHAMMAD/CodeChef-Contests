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
    int count=0;
    for(int i=0;i<n;i++) {
        if(a[i]%2!=0) {
            count++;
        }
    }
    if(count%2==0) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
   }
   return 0;
}