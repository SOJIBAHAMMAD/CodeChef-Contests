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
    int x,y,z;
    cin>>x>>y>>z;
    int a=min(x,z);
    int b=y/2;
    cout<<a+b<<nl;
   }
   return 0;
}