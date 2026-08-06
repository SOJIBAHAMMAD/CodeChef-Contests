#include<bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin>>T;
    while(T--) {
        int N,A,B;
        cin>>N>>A>>B;
        int Xi,Yi;
        int let=INT_MAX;
        for(int i=0;i<N;i++) {
            cin>>Xi>>Yi;
            int ans=abs(A-Xi)+abs(B-Yi);
            let=min(let,ans);
        }
        cout<<let<<endl;
    }
    return 0;
}