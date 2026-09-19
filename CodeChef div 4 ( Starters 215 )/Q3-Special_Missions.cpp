#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n,c;
    cin>>n>>c;
    vector<int>point(n);
    for(int i=0;i<n;i++) {
        cin>>point[i];
    }
    string s;
    cin>>s;
    int ans=0;
    bool limit=true;
    for(int i=0;i<n;i++) {
        if(s[i]=='0') {
            ans += point[i];
        } else {
            if(ans >= c) {
                ans += point[i];
                if(limit) {
                    ans -= c;
                    limit=false;
                }
            } else {
                continue;
            }
        }
    }
    cout<<ans<<endl;
   }
   return 0;
}