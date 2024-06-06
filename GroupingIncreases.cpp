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

        int last1=INT_MAX, last2=INT_MAX, ans=0;
        for(int i=0;i<n;i++){
            if(last1>last2) swap(last1,last2);
            if(a[i]<=last1) last1=a[i];
            else if(a[i]<=last2) last2=a[i];
            else{
                last1=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}