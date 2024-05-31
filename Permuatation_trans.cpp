#include <bits/stdc++.h>
using namespace std;

void rec(int l, int r, vector<int> &a, vector<int> &d, int depth){
    if(l>r) return ;
    if(l==r){
        d[l]=depth;
        return ;
    }
    int x=l;
    for(int i=l+1;i<=r;i++){
        if(a[x]<a[i]) x=i;
    }
    d[x]=depth;
    rec(x+1,r,a,d,depth+1);
    rec(l,x-1,a,d,depth+1);
}  

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> d(n,0);
        rec(0,n-1,a,d,0);
        for(auto i:d) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}