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
    map<char,int>freq;
    for(int i=0;i<n;i++) {
        freq[s[i]]++;
    }
    int mx_freq=INT_MIN;
    for(auto x:freq) {
        if(x.second > mx_freq ) {
            mx_freq=x.second;
        }
    }
    if(mx_freq <= 2) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
   }
   return 0;
}