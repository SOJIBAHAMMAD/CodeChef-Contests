#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count_0= count(s.begin(),s.end(),'0');
    int count_1= n-count_0;
    int mx=max(count_0,count_1);
    if(mx > n-k) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
   }
   return 0;
}