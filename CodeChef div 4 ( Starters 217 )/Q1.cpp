#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,m;
   cin>>n>>m;
   if(n<m) {
      cout<<0<<nl;
   } else {
      cout<<n-m<<nl;
   }
   
   return 0;
}
