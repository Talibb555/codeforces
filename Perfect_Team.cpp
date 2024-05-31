#include <bits/stdc++.h>
using namespace std;

bool f(int mid, int c, int m, int x){
    int coders=mid;
    int maths=mid;
    c=c-mid;
    m=m-mid;
    if(c<0 || m<0) return false;
    if(c+m+x>=mid) return true;
    return false;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int c,m,x;
        cin>>c>>m>>x;
        int lo=0;
        int hi=1e8;
        int ans=0;
        while (lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(f(mid,c,m,x)){
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}