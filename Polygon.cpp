#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char c;
                cin>>c;
                a[i][j]=c-'0';
            }
        }
        int ans=1;
        for(int i=n-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(a[i][j]==1 && a[i+1][j]==0 && a[i][j+1]==0) ans=0;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}