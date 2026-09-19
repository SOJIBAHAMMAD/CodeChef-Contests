#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int r,b,g;
    cin>>r>>b>>g;
    if(r==0 || b==0 || g==0) {
        cout<<((r*3)+(b*3)+(g*3))<<endl;
        continue;
    }
    int ans=0;
    while(r>0 && b>0 && g>0) {
        ans += 10;
        r--,b--,g--;
    }
    int x=(r*3)+(b*3)+(g*3);
    ans += x;
    cout<<ans<<endl;
   }
   return 0;
}