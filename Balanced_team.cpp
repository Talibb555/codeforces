#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> pf(n+1,0);
        for(int i=1;i<n-1;i++){
            if(a[i-1]<a[i] && a[i+1]<a[i]) pf[i+1]=pf[i]+1;
            else pf[i+1]=pf[i];
        }
        int p=0;
        int ind=1;
        for(int i=1;i+k-1<=n;i++){
            if(abs(pf[i-1]-pf[i+k-1-1])>p){
                p=abs(pf[i-1]-pf[i+k-1-1]);
                ind=i;
            }
        }
        cout<<p+1<<" "<<ind<<endl;
    }
    
    return 0;
}