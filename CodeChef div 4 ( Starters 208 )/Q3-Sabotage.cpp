#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n,x,k;
        cin>>n>>x>>k;
        vector<int>score(n);
        for(int i=0;i<n;i++) {
            cin>>score[i];
        }
        sort(score.begin(),score.end(),greater<int>());
        int position=1;
        for(int i=0;i<k && i<n;i++) {
            score[i]=0;
            x+=100;
        }
        for(auto val : score) {
            if(val>x) {
                position++;
            }
        }
        cout<<position<<endl;

    }
    return 0;
}