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
    while (t--)
    {
        int n;cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            for(int bit=0;bit<30;bit++){
                if((1<<bit)&x) m[bit]++;
            }
        }
        for(int k=1;k<=n;k++){
            bool ok=1;
            for(auto i:m){
                if(i.second%k!=0) ok=0;
            }
            if(ok) cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}