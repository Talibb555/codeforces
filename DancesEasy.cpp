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
        int n,m;cin>>n>>m;
        vector<int> a(n),b(n);
        a[0]=m;
        for(int i=1;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ans=0;
        int i=0,j=0;
        while(i<n && j<n){
            if(a[i]>=b[j]){
                j++;
                ans++;
            } else {
                i++;j++;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}