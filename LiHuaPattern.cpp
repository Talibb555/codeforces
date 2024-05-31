#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<vector<int> > v(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        // if(n==1) {cout<<"YES"<<endl;continue;}
        // if(k>=n*n) {cout<<"YES"<<endl;continue;}
        int i=0,j=n*n-1;
        int diff=0;
        while(i<j){
            if(v[i/n][i%n]!=v[j/n][j%n]) {diff++;}
            i++;j--;
        }
        // cout<<"Diff:"<<diff<<endl;
        if(diff>k) cout<<"NO"<<endl;
        else{
            k-=diff;
            if(n&1) cout<<"YES"<<endl;
            else if(k&1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }   
    return 0;
}