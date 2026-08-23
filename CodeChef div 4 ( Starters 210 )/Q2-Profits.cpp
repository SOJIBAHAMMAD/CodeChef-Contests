#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int N,X;
        cin>>N>>X;
        int sell=0,count=0;
        for(int i=X;i<=N;i++) {
            sell+=i;
            count++;
        }
        int cost=count*X;
        cout<<sell-cost<<endl;
    }
    return 0;
}