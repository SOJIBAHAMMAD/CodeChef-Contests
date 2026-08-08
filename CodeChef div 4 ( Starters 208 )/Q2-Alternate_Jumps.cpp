#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int final_pos=n;
        for(int i=1;i<n;i++) {
            if(i%2!=0) {
                final_pos-=(n-i);
            } else {
                final_pos+=(n-i);
            }
        }
        cout<<final_pos<<endl;
    }
    return 0;
}