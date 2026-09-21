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
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    set<int>st;
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j++) {
            if((a[i]^a[j])==abs(a[i]-a[j])) {
                st.insert(a[i]);
                st.insert(a[j]);
            }
        }
    }
    cout<<st.size()<<nl;
   }
   return 0;
}