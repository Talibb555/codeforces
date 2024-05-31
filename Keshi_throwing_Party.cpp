#include <bits/stdc++.h>
using namespace std;

bool f(int mid, vector<int>&a, vector<int>&b){
    int friends=0;
    for(int i=0;i<a.size();i++){
        if(friends<=b[i] && mid-1-friends<=a[i]) friends++;
    }
    return friends>=mid;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        int lo=1, hi=n;
        int ans=1;
        while (lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(f(mid,a,b)){
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}