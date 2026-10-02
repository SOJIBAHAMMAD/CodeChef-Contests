#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,x,y;
   cin>>n>>x>>y;
   if(n>=2*x && n>=2*y) {
    cout<<"YES"<<nl;
   } else {
    cout<<"NO"<<nl;
   }
   return 0;
}
