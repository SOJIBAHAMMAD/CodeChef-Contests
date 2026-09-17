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
        vector<int>a(n);
        int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]==1) {
                count1++;
            } else if(a[i]==2) {
                count2++;
            } else {
                count3++;
            }
        }
        int rem1and3=min(count1,count3);
        int rem2= max(0,count2-1);
        
        cout<<rem1and3+rem2<<endl;
    }
    return 0;
}