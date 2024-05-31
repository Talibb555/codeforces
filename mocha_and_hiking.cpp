#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]==1){
            for(int i=0;i<n;i++) cout<<i+1<<" ";
            cout<<n+1<<endl;
        }
        else{
            for(int i=0;i<n-1;i++){
                if(a[i]==0 && a[i+1]==1){
                    for(int j=0;j<=i;j++) cout<<j+1<<" ";
                    cout<<n+1<<" ";
                    for(int j=i+1;j<n;j++) cout<<j+1<<" ";
                    cout<<endl;
                    continue;
                }
            }
            for(int i=0;i<n;i++){
                cout<<i+1<<" ";
            }
            cout<<n+1<<" "<<endl;
        }
    }
    
    return 0;
}