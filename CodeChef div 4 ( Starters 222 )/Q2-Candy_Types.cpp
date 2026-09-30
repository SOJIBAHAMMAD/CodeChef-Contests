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
    vector<int>freq(n+1,0);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        freq[x]++;
    }
    int mx_freq=0;
    int res=0;
    for(int i=1;i<=n;i++) {
        if(freq[i]>mx_freq) {
            mx_freq=freq[i];
            res=i;
        }
    }
    cout<<res<<nl;

   }
   return 0;
}