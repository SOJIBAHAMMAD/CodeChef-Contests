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
    int a,b;
    cin>>a>>b;
    if((b*100) > (a*225)) {
        cout<<"Small"<<nl;
    } else if((b*100) < (a*225)) {
        cout<<"Large"<<nl;
    } else {
        cout<<"Equal"<<nl;
    }
   }
   return 0;
}