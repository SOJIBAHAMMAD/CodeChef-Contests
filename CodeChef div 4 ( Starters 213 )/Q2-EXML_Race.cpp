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
        vector<pair<int,int>>ans;
        for(int i=1;i<=n;i++) {
            int d,t;
            cin>>d>>t;
            int speed=d/t;
            ans.push_back({speed,i});
        }
        int mx=INT_MIN;
        int idx=-1;
        for(int i=0;i<n;i++) {
            if(ans[i].first > mx) {
                mx=ans[i].first;
                idx=ans[i].second;
            }
        }
        cout<<idx<<endl;
        ans.clear();
    }
    return 0;
}