#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
    if(b==0) return a;
    return gcd(b,a%b);
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                int ans = gcd(i,j);
            }
        }
    }
    return 0;
}