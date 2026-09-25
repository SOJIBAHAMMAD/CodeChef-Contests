#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,m;
   cin>>n>>m;
   int ans = m-n;
   cout<<min(n,ans)<<nl;
   return 0;
}
