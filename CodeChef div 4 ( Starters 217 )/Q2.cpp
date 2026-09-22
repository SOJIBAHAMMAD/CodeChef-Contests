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
    vector<int>a(n);
    int x=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        x += a[i];
    }
    
    if(x>=0) {
        cout<<0<<nl;
    } else {
        cout<<(abs(x)+n-1)/n<<nl;
    }
   }
   return 0;
}