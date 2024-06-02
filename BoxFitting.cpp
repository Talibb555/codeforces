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
        int n,w;cin>>n>>w;
        multiset<int> st;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            st.insert(x);
        }
        int ans=1;
        int spaceLeft=w;
        while(!st.empty()){
            auto it=st.upper_bound(spaceLeft);
            if(it!=st.begin()){
                it--;
                spaceLeft-=(*it);
                st.erase(it);
            }
            else{
                spaceLeft=w;
                ans++;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}