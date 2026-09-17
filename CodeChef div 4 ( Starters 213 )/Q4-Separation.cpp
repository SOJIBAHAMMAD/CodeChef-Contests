#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++) {
            if(a[i]<x) {        
                count1++;
            } else if(a[i]>x) {
                count2++;
            } else {
                count3++;
            }
        }
        if(count3 >0 || count1==0 || count2==0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}