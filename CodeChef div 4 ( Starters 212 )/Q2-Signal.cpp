#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //   2 
    //   1
    //   0
    //   1
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count1=0,count0=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='0') {
                count0++;
            } else if(s[i]=='1' && count0 > 0) {
                count1++;
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}