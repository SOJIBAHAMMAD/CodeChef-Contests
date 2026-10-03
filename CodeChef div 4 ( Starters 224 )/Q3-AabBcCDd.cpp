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
    vector<int>freq(26,0);
    for(auto ch:s) {
        char low=tolower(ch);
        freq[low-97]++;
    }
    sort(freq.begin(),freq.end(),greater<int>());
    int res=0;
    if(freq[1]>0) {
        res=freq[0]+freq[1];
    } else {
        res=freq[0];
    }
    cout<<res<<nl;
   }
   return 0;
}