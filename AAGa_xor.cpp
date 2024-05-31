#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        bool ans=0;
        int x=0;
        for(int i=0;i<n-1;i++){
            x^=a[i];
            bool f=0;
            int xx=0;
            for(int j=i+1;j<n;j++){
                xx^=a[j];
                if(x==xx){
                    f=1;xx=0;
                }
            }
            if(f && xx==0) {cout<<"YES"<<endl;ans=1;break;}
        }
        if(ans==0) cout<<"NO"<<endl;
    }
    
    return 0;
}