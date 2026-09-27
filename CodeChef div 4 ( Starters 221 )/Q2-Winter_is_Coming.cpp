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
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    bool flag=false;
    int count=0;
    for(int i=0;i<n;i++) {
        if(v[i]<a) {
            if(!flag) {
                flag=true;
                count++;
            }
        } else if(v[i]>b) {
            flag=false;
        }
    }
    cout<<count<<nl;
   }
   return 0;
}