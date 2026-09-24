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
    string s;
    cin>>s;
    int count1=0,count2=0,ans=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') {
            count1++;
        } else {
            count2++;
        }
        if(count1>count2) {
            ans++;
        }
    }
    cout<<ans<<nl;
   }
   return 0;
}