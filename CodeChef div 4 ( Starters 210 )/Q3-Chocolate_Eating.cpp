#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--) {
        ll A,B;
        cin>>A>>B;
        if(A!=B) {
            cout<<A+B<<endl;
        } else {
            cout<<2*A-1<<endl;
        }
    }
    return 0;
}