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
        int h[n];
        for(int i=0;i<n;i++) cin>>h[i];
        sort(h,h+n);
        if(n==2) {cout<<h[0]<<" "<<h[1]<<endl;continue;}
        int pos=-1, mn=INT_MAX;
        for(int i=1;i<n;i++){
            if(h[i]-h[i-1]<mn){
                mn=abs(h[i]-h[i-1]);
                pos=i;
            }
        }
        for(int i=pos;i<n;i++) cout<<h[i]<<" ";
        for(int i=0;i<pos;i++) cout<<h[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}