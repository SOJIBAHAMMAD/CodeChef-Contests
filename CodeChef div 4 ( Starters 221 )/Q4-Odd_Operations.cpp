#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int minOperation(int n) {
    if(n%2==1) {
        return 0;
    } 
    bool flag=false;
    string s= to_string(n);
    for(auto ch : s) {
        if((ch-'0')%2==1) {
            flag=true;
            break;
        }
    }
    if(flag==true) {
        return 1;
    }
    return -1;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    int ans = minOperation(n);
    cout<<ans<<nl;
   }
   return 0;
}