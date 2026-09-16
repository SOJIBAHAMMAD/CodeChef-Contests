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
        vector<int>v(n);
        priority_queue<int>pq;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            pq.push(v[i]);
        }
        int count=0;
        while(!pq.empty()) {
            int x=pq.top();
            pq.pop();
            int sz=v.size();
            int dis1=0,dis2=0;
            for(int i=0;i<sz;i++) {
                if(v[i]!=x) {
                    dis1++;
                } else {
                    break;
                }
            }
            for(int i=sz-1;i>=0;i--) {
                if(v[i]!=x) {
                    dis2++;
                } else {
                    break;
                }
            }
            auto it=find(v.begin(),v.end(),x);
            if(it!=v.end()) {
                v.erase(it);
            }
            int ans=min(dis1,dis2);
            count += ans;
        }
        cout<<count<<endl;
    }
    return 0;
}