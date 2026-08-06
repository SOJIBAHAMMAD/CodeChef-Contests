#include<bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        string S;
        cin>>S;
        int start1=-1;
        int last1=-1;
        for(int i=0;i<N;i++) {
            if(S[i]=='1') {
                start1=i;
                break;
            }
        }
        for(int i=N-1;i>=0;i--) {
            if(S[i]=='1') {
                last1=i;
                break;
            }
        }
        int count=0;
        if(start1==-1) {
            cout<<0<<endl;
            continue;
        }
        for(int i=start1;i<=last1;i++) {
            if(S[i]=='0') {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}