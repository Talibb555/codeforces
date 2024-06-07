#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<vector<int> > prefix(n+1,vector<int>(31,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<30;j++){
                if(a[i]&(1<<j)) prefix[i+1][j]=prefix[i][j]+1;
                else prefix[i+1][j]=prefix[i][j];
            }
        }

        int q;cin>>q;
        while (q--)
        {
            int l,k;cin>>l>>k;
            if(a[l-1]<k){
                cout<<-1<<" ";
                continue;
            }    
            int lo=l,hi=n;
            int ans=-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                int sum=0;
                for(int i=0;i<30;i++){
                    if(prefix[mid][i]-prefix[l-1][i]==mid-l+1) sum+=(1<<i);
                }
                if(sum>=k){
                    ans=mid;
                    lo=mid+1;
                } else hi=mid-1;
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }   
    return 0;
}