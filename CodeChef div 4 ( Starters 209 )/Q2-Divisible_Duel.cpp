#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--) {
        int x,y;
        cin>>x>>y;
        vector<int>v;
        for(int i=x;i<=y;i++) {
            if(i%x==0) {
                v.push_back(i);
            }
        }
        int sum_even=0,sum_odd=0;
        for(int i=0;i<v.size();i++) {
            if(v[i]%2==0) {
                sum_even+=v[i];
            } else {
                sum_odd+=v[i];
            }
        }
        if(sum_even>=sum_odd) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}