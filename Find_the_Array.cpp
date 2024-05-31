#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        long long odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i&1) odd+=a[i];
            else even+=a[i];
        }
        // vector<int> ans;
        if(odd>even){
            for(int i=0;i<n;i++){
                if(i&1) cout<<a[i]<<" ";
                else cout<<1<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(!(i&1)) cout<<a[i]<<" ";
                else cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}